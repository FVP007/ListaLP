#include <stdio.h>

int Fibonacci(int N){
    if(N <= 2)
        return N-1;

    return Fibonacci(N-1) + Fibonacci(N-2);
}

int main(){
    int N;
    scanf("%d", &N);
    printf("\n%d", Fibonacci(N));
}