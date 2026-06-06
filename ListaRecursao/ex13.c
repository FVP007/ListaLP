#include <stdio.h>

int SomaSerie(int i, int j, int k){
    if(i >= j) return 0;

    return i + SomaSerie(i+k, j, k);
}

int main(){
    printf("%d", SomaSerie(1, 10, 2));
}