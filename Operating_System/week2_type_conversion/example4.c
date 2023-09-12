#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    //unsigned char c;
    char c;
    
    // Open the input file for reading
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        perror("Error opening input file");
        return 1;
    }

    // Open the output file for writing
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        perror("Error opening output file");
        fclose(inputFile); // Close the input file before exiting
        return 1;
    }

    // Read characters from the input file and write them to the output file
    while ((c = fgetc(inputFile)) != EOF) {
        fputc(c, outputFile);
    }

    // Close the files when done
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
