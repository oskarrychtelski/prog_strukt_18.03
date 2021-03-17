#include <stdio.h>
#include <stdlib.h>

double min(double, double);
int main()
{
    min(12,1);
    return 0;
}

double min(double x, double y){
    if (x<y)
        printf("%f",x);
    else
        printf("%f",y);
}
