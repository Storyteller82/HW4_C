
#include <stdio.h>
int main(void)
{
    signed int a, b, c, d, e, max;

    scanf ("%d %d %d %d %d", &a, &b, &c, &d, &e);

        max =  a > b ?  a : b; // Если а > b, то max = a, иначе max = b
        max = max > c ? max : c; // Если max > c, то max = max, иначе max = c
        max = max > d ? max : d; // Если max > d, то max = max, иначе max = d
        max = max > e ? max : e; // Если max > e, то max = max, иначе max = e
        printf("%d", max);

    return 0;
}

