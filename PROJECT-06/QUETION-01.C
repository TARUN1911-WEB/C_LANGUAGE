#include <stdio.h>


void addition(int h, int d);
void subtraction(int h, int d);
void multiplication(int h, int d);
void division(int h, int d);
void modulo(int h, int d);

main() {
    int choice;
    int num1, num2;

    do {
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for the exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5) {
            printf("Enter The First Number: ");
            scanf("%d", &num1);
            printf("Enter The Second Number: ");
            scanf("%d", &num2);
        }

        switch (choice) {
            case 1:
                addition(num1, num2);
                break;
                
            case 2:
                subtraction(num1, num2);
                break;
                
            case 3:
                multiplication(num1, num2);
                break;
                
            case 4:
                division(num1, num2);
                break;
                
            case 5:
                modulo(num1, num2);
                break;
                
            case 0:
                printf("Exiting The Program.\n");
                break;
                
            default:
                printf("Invalid choice! Please enter a valid option.\n");
                break;
        }
    } 
	
	while (choice != 0);

}



void addition(int h, int d) {
    printf("Addition of %d and %d is %d\n", h, d, h + d);
}

void subtraction(int h, int d) {
    printf("Subtraction of %d and %d is %d\n", h, d, h - d);
}

void multiplication(int h, int d) {
    printf("Multiplication of %d and %d is %d\n", h, d, h * d);
}

void division(int h, int d) {
    if (d != 0) {
        printf("Division of %d and %d is %d\n", h, d, h / d);
    }      
    
}

void modulo(int h, int d) {
    if (d != 0) {
        printf("Modulo of %d and %d is %d\n", h, d, h % d);
    } 
       
}
