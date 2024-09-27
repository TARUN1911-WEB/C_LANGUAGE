#include <stdio.h>

void checkDivisibility(int num);

int main() {
    int number;
    
    
    printf("Enter any number: ");
    scanf("%d", &number);
    
   
    checkDivisibility(number);
    
    return 0;
}

 
void checkDivisibility(int num) {
    if (num % 3 == 0 && num % 5 == 0) {
        printf("The given number is divisible by both 3 & 5.\n");
    } else {
        printf("The given number is not divisible by both 3 & 5.\n");
    }
}

