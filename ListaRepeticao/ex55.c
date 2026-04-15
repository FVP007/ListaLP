#include <stdio.h>

int main() {
    int i;
    printf("Tabuada do 8:\n"); 
    
    for(i = 1; i <= 10; i++) {
        printf("8 x %d = %d\n", i, i * 8);
    }
    
    return 0;
}