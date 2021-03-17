#include <stdio.h>
#include <stdlib.h>
int rekurencja(int);
int main()
{
    int n;
    printf("Podaj nieujemna liczbe calkowita: ");
    scanf("%d", &n);
    printf("wynik to %d", rekurencja(n));
    return 0;
}

int rekurencja(int n){
    if (n==0)
        return 1;
    return 2*rekurencja(n-1)+5;
}
