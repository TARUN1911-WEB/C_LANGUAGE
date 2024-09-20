#include <stdio.h>

int main() {
    int r, c;

    printf("Enter the array's row size: ");
    scanf("%d", &r);
    printf("Enter the array's column size: ");
    scanf("%d", &c);

    int array[r][c];

    printf("Enter array's elements:\n");
    for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
    printf("a[%d][%d] = ", i, j);
    scanf("%d", &array[i][j]);
        }
    }

    int largest = array[0][0];

    for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
    if (array[i][j] > largest) {
    largest = array[i][j];
            }
        }
    }

    printf("The largest element is: %d\n", largest);

}

