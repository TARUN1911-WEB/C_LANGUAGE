#include <stdio.h>

int main() {
    int startYear, endYear;

    
    printf("Enter the first number: ");
    scanf("%d", &startYear);
    printf("Enter the second number: ");
    scanf("%d", &endYear);

   
    while (startYear <= endYear) {
                if ((startYear % 4 == 0 && startYear % 100 != 0) || (startYear % 400 == 0)) {
            printf("%d ", startYear);
        }
        startYear++;  
    }

    return 0;
}

