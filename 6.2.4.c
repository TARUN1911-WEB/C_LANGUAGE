#include <stdio.h>

int main() {
    int N, first = 0, second = 1, next;

    
    printf("Enter any number: ");
    scanf("%d", &N);

    
    printf("%d, %d", first, second);  

    while(int i = 3; i <= N; i++) {
        next = first + second;
        printf(", %d", next);
        first = second;  
        second = next;
    }

    return 0;
}

