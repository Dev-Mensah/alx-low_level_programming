#include <stdio.h>
#include <stdlib.h>

int main() {
    const char* inputFile = getenv("CFILE");
    if (inputFile == NULL) {
        printf("CFILE environment variable not set.\n");
        return 1;
    }

    const char* outputFile = "c";
    FILE* input = fopen(inputFile, "r");
    FILE* output = fopen(outputFile, "w");

    if (input == NULL) {
        printf("Failed to open input file: %s\n", inputFile);
        return 1;
    }

    if (output == NULL) {
        printf("Failed to open output file: %s\n", outputFile);
        fclose(input);
        return 1;
    }

    int c;
    while ((c = fgetc(input)) != EOF) {
        fputc(c, output);
    }

    fclose(input);
    fclose(output);

    printf("Preprocessing completed successfully.\n");
    return 0;
}

