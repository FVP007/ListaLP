#include <stdio.h>

int main()
{
    int i, x = 0;
    
    for(i = 10; i >= 1; i--){
		x++;
        printf("%d° número: %d\n", x, i);
    }
}