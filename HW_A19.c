
#include <stdio.h>
int main(void)
{
    unsigned int a, b, c;

    scanf ("%d %d %d", &a, &b, &c);

    if ((a<(b+c)) && (b<(a+c)) && (c<(a+b)))
    {
        printf ("YES\n");
    }
    else
    {
        printf ("NO\n");
    }


    return 0;
}

