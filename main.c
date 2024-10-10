#include <stdio.h>
#include <math.h>

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
    double y;
    double x;
    validateInput("%lf", &x, "\nType in X value: ");
    if (-5 <= x && x < 0) {
        y = pow(x, 2) + 2 * x + 1;
    } else if (0 <= x && x < 10) {
        y = pow(x + 1, 1 / 2) - 1 / pow(x + 5, 1 / 2);
    } else if (10 <= x && x < 1000) {
        y = log10(x) + 2 * x;
    } else {
        y = x / 2;
    }

    printf("\nY = %lf", y);
    return 0;
}
