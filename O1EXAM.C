#include<stdio.h>
int main() {
    float celsius, fahrenheit;

    
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    printf("The temperature in Fahrenheit: %.2f\n", fahrenheit);


    
}

