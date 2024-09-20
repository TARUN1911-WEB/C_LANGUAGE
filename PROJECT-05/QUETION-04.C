#include <stdio.h>

int main() {
    int rowSize, colSize;
    
    printf("Enter the array's row size: ");
    scanf("%d", &rowSize);
    printf("Enter the array's column size: ");
    scanf("%d", &colSize);

    int array[rowSize][colSize];

    printf("Enter array's elements:\n");
    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < colSize; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    int rowNum;
    printf("\nEnter row number: ");
    scanf("%d", &rowNum);

    if (rowNum >= 0 && rowNum < rowSize) {
        int rowSum = 0;
        printf("Elements of row %d: ", rowNum);
        for (int j = 0; j < colSize; j++) {
            printf("%d", array[rowNum][j]);
            if (j != colSize - 1) {
                printf(", ");
            }
            rowSum += array[rowNum][j];
        }
        printf("\nThe sum of row %d: %d\n", rowNum, rowSum);
    } else {
        printf("Invalid row number.\n");
    }

    int colNum;
    printf("\nEnter column number: ");
    scanf("%d", &colNum);

    if (colNum >= 0 && colNum < colSize) {
        int colSum = 0;
        printf("Elements of column %d: ", colNum);
        for (int i = 0; i < rowSize; i++) {
            printf("%d", array[i][colNum]);
            if (i != rowSize - 1) {
                printf(", ");
            }
            colSum += array[i][colNum];
        }
        printf("\nThe sum of column %d: %d\n", colNum, colSum);
    } else {
        printf("Invalid column number.\n");
    }

    return 0;
}

