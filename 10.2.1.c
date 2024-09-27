#include <stdio.h>

int sumOfArray , i(int arr[], int size);

int main() {
    int size, i;
    
    printf("Enter array size: ");
    scanf("%d", &size);
    
    int arr[size];  
    
    printf("Enter array elements:\n");
    for (i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
    int sum = sumOfArray , i(arr, size);
    
    printf("The sum of the array: %d\n", sum);
    
    return 0;
}

int sumOfArray(int arr[], int size) {
    int sum = 0;
    for (i = 0; i < size; i++) {
        sum += arr[i];  
    }
    return sum;
}

