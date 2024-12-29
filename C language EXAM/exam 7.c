#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char inputFile[] = "input.txt";
    char outputFile[] = "output.txt";
    char sentence[1000];

    FILE *inFile = fopen(inputFile, "w");
    
    if (inFile == NULL) 
	{
        printf("Error: Could not open %s for writing.\n", inputFile);
        return 1;
    }

    printf("Enter a sentence to write into the file: ");
    fgets(sentence, sizeof(sentence), stdin);

    fprintf(inFile, "%s", sentence);
    fclose(inFile);

    inFile = fopen(inputFile, "r");
    
    if (inFile == NULL)
	{
        printf("Error: Could not open %s for reading.\n", inputFile);
        return 1;
    }

    FILE *outFile = fopen(outputFile, "w");
    
    if (outFile == NULL) 
	{
        printf("Error: Could not open %s for writing.\n", outputFile);
        fclose(inFile);
        return 1;
    }

    while (fgets(sentence, sizeof(sentence), inFile) != NULL) 
	{
        fprintf(outFile, "%s", sentence);
    }

    fclose(inFile);
    fclose(outFile);

    printf("The sentence has been written to %s and copied to %s.\n", inputFile, outputFile);

    return 0;
}
