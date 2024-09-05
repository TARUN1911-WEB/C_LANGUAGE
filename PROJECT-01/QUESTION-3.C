#include<stdio.h>

/*
	Q.3 Triangle Angle Finder
	Write a program to find the third angle of a right triangle when two other angles are given.

	Example:
	Input: First angle: 65, Second angle: 45
	Output: Third angle: 70
*/

 main() {
    int first_angle, second_angle, third_angle;

    printf("Enter the first angle: ");
    scanf("%d", &first_angle);
    
    printf("Enter the second angle: ");
    scanf("%d", &second_angle);

    third_angle = 180 - (first_angle + second_angle);

    printf("Third angle: %d\n", third_angle);

}
