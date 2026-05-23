#include <stdio.h>

void encontraResto13(int, int);

int main() {
    encontraResto13(10, 50);
}

void encontraResto13(int x, int y) {
    for (int i = x + 1; i < y; i++) {
        if (i % 13 == 5)
            printf("%d ", i);
    }
    printf("\n");
}