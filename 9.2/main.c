#include <stdio.h>
#include <stdlib.h>

char rzad_zn(char ch, int i, int j);
int main()
{
    char z='f';
    rzad_zn(z,2,5);
    return 0;
}

char rzad_zn(char ch, int i, int j){
    for (i=0;i<j;i++)
        printf("%c\t", ch);
}
