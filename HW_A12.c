
#include <stdio.h>
int main(void)
{
    unsigned int a, b, c, chislo;

    scanf ("%d", &chislo);

    a = chislo%10;
    b = chislo/100;
    c = (chislo/10)%10;


        printf("%d", a+b+c);


    return 0;
}

