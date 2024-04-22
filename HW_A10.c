#include <stdio.h>

int main(void)
{
    signed int a, b, c, d, e, min;

    scanf ("%d %d %d %d %d", &a, &b, &c, &d, &e);

        min =  a < b ?  a : b; // Если а < b, то min = a, иначе min = b
        min = min < c ? min : c; // Если min < c, то min = min, иначе min = c
        min = min < d ? min : d; // Если min < d, то min = min, иначе min = d
        min = min < e ? min : e; // Если min < e, то min = min, иначе min = e
        printf("%d", min);

    return 0;
}

