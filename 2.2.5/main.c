#include <stdio.h>
#include <stdlib.h>

int potega(int n);
int main()
{
    potega(6);
    return 0;
}

int potega(int n){
    int x;
    x=pow(2,n);
    printf("%d", x);
}

