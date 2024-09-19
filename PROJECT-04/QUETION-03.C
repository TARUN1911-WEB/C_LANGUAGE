#include <stdio.h>

int main() {
    int i, j, Y;

        for(i = 5; i >= 1; i--) {
              for(Y = 1; Y < i; Y++) {
            printf("  "); 
        }

        
        for(j = i; j <= 5; j++) {
            printf("%d ", j); 
        }

        printf("\n");
    }

   
}

