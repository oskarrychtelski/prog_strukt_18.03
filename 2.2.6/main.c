#include <stdio.h>
#include <stdlib.h>

int n_do_m(int n, int m);
int main()
{
    n_do_m(2,6);
    return 0;
}

int n_do_m(int n, int m){
    int x;
    x=pow(n,m);
    printf("%d", x);
}
