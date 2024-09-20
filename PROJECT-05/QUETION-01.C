#include <stdio.h>

int main() {
    int k;

    printf("Enter the array's size: ");
    scanf("%d", &k);

    int array[k];

    printf("Enter array's elements:\n");
    for (int i = 0; i < k; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
    }

    printf("Negative elements from the array: ");
    k=0;
    for (int i = 0; i < k; i++) {
        if (array[i] < 0) {
            printf("%d ", array[i]);
        }
    }
    
    
     if (!k){
    	
    	printf("None");
	}
    printf("\n");
    
    
   

    return 0;
}

