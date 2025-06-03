#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 1000

int main() {
    char filename[100];
    FILE *file;
    char buffer[MAX_LENGTH];
    char choice;

    // Get the filename from the user
    printf("Enter the name of the file to open: ");
    scanf("%s", filename);

    // Try opening the file for reading
    file = fopen(filename, "r");

    if (file == NULL) {
        // File not found
        printf("File '%s' not found.\n", filename);
        printf("Would you like to create it? (y/n): ");
        scanf(" %c", &choice);  // The space before %c clears leftover newline

        if (choice == 'y' || choice == 'Y') {
            file = fopen(filename, "w");
            if (file == NULL) {
                printf("Error: Unable to create file.\n");
                exit(1);
            }

            printf("Enter text to write to the file.\n");
            printf("End input by entering a single line with just '#'.\n");

            // Clear the input buffer
            getchar();

            while (1) {
                fgets(buffer, MAX_LENGTH, stdin);
                if (buffer[0] == '#' && buffer[1] == '\n') {
                    break;
                }
                fputs(buffer, file);
            }

            fclose(file);

            // Reopen and display the file content
            file = fopen(filename, "r");
            if (file == NULL) {
                printf("Error reopening file.\n");
                exit(1);
            }

            printf("\nContents of '%s':\n\n", filename);
            while (fgets(buffer, MAX_LENGTH, file) != NULL) {
                printf("%s", buffer);
            }
        } else {
            printf("File not created. Exiting.\n");
            exit(0);
        }
    } else {
        // File exists, read and display it
        printf("\nContents of '%s':\n\n", filename);
        while (fgets(buffer, MAX_LENGTH, file) != NULL) {
            printf("%s", buffer);
        }
    }

    fclose(file);
    return 0;
}