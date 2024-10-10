#include <stdio.h>

unsigned int validateInput(const char* formatSpecifier, void* value, char message[]) {
    char input[100];

    printf(message);
    do {
        fgets(input, sizeof(input), stdin);
        if ((sscanf(input, formatSpecifier, value)) == 1) {
            return 1;
        } else {
            printf("\nInvalid input, try again");
            printf(message);
        }
    } while (1);
}

int main(void) {
    printf("Hello, World!\n");
    return 0;
}
