#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for rows
    for(i = 1; i <= 5; i++) {
        // Inner loop for printing numbers
        for(j = 41; j < 41 + i; j++) {
            printf("%d ", j);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}

