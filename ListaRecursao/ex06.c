#include <stdio.h>

int MultipRec(int n1,int n2){
    if(n2 == 1)
        return n1;

    return n1 + MultipRec(n1, n2 - 1);
}

int main(){
    int n1, n2;
    scanf("%d", &n1);
    scanf("%d", &n2);
    printf("\n%d", MultipRec(n1, n2));
}