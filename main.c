#include <stdio.h>
#include <string.h>

void vulnerable_function(char *input) {
    char buffer[10]; // Small buffer vulnerable to overflow
    strcpy(buffer, input); // Vulnerable function that copies input into buffer without boundary checks
}

int main() {
    // Hardcoded string longer than the buffer size
    char input[] = "This is a string longer than the buffer size";

    vulnerable_function(input); // Call vulnerable function with the hardcoded string
    printf("Program executed successfully.\n");
    return 0;
}

