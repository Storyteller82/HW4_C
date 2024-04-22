
#include <stdio.h>
int main(void)
{
    signed int a, b, c, d, e, max, min;

    scanf ("%d %d %d %d %d", &a, &b, &c, &d, &e);

        max =  a > b ?  a : b; // Если а > b, то max = a, иначе max = b
        max = max > c ? max : c; // Если max > c, то max = max, иначе max = c
        max = max > d ? max : d; // Если max > d, то max = max, иначе max = d
        max = max > e ? max : e; // Если max > e, то max = max, иначе max = e

        min =  a < b ?  a : b; // Если а < b, то min = a, иначе min = b
        min = min < c ? min : c; // Если min < c, то min = min, иначе min = c
        min = min < d ? min : d; // Если min < d, то min = min, иначе min = d
        min = min < e ? min : e; // Если min < e, то min = min, иначе min = e


        printf("%d", max+min);

    return 0;
}

