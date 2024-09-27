#include <stdio.h>

int cube(int num);

int main() {
    int number, result;

    printf("Enter any number: ");
    scanf("%d", &number);

    result = cube(number);

    printf("Cube is: %d\n", result);

    return 0;
}

int cube(int num) {
    return num * num * num;
}

