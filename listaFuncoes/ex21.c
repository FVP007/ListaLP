#include <stdio.h>

int classificaTriangulo(int, int, int);

int main() {
    printf("%d\n", classificaTriangulo(3, 3, 3));
    printf("%d\n", classificaTriangulo(3, 4, 4));
    printf("%d\n", classificaTriangulo(3, 4, 5));
    printf("%d\n", classificaTriangulo(1, 2, 5));
}

int classificaTriangulo(int a, int b, int c) {
    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
        return 0;
    
    if (a == b && b == c)
        return 1;
    else if (a == b || b == c || a == c)
        return 2;
    else
        return 3;
}