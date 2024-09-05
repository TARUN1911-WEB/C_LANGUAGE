#include <stdio.h>

int main() {
    char ch = 'a';  

    
    do {
        printf("%c\n", ch);
        ch += 4;  
    } while (ch <= 'z');

    printf("\n");
    return 0;
}

