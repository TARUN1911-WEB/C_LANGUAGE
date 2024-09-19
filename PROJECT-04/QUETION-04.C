#include <stdio.h>

int main() {
    int i, j, x;

   
    for(i = 5; i >= 1; i--) {
                for(x = 5; x > i; x--) {
            printf("  ");  
        }

        
        for(j = 1; j <= i; j++) {
            printf("%d\n ", j % 2);  
        }

        
    }

    
}

