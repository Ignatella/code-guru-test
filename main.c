#include <stdio.h>
#include <stdlib.h>

void resource_leak() {
    FILE *file_pointer;
    char *file_name = "example.txt";

    file_pointer = fopen(file_name, "r");
    if (file_pointer == NULL) {
        printf("Failed to open file.\n");
        return;
    }

    // Do something with the file, but forget to close it
    // For demonstration, let's just read a character
    char ch = fgetc(file_pointer);
    printf("Read character: %c\n", ch);

    // File is not closed, causing a resource leak
}

int main() {
    resource_leak();

    // Some other operations in the program...

    // Forgot to close file opened in resource_leak()
    // fclose(file_pointer); // Uncomment this line to fix the leak

    printf("Program executed successfully.\n");
    return 0;
}

