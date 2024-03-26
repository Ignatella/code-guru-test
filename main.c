#include <stdio.h>
#include <stdlib.h>

void memory_leak() {
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    *ptr = 10;

}

int main() {
    memory_leak();

    printf("Program executed successfully.\n");
    return 0;
}

