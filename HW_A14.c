
#include <stdio.h>
int main(void)
{
    signed int a, b, c, chislo;

    scanf ("%d", &chislo);

    a = chislo%10;
    b = chislo/100;
    c = (chislo/10)%10;

    if (a>b)
    {
        if (a>c)
        {
            printf("%d", a);
        }
    }
    else if (b>c)
    {
        printf("%d", b);
    }
    else
    {
        printf("%d", c);
    }

    return 0;
}

