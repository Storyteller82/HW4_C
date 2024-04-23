
#include <stdio.h>
int main(void)
{
    unsigned int a, b;
    //float k, b;

    scanf ("%d %d", &a, &b);

    if (a<b)
    {
        printf ("Less\n");
    }
    else if (a>b)
    {
        printf ("Above\n");
    }
    else
    {
        printf ("Equal\n");
    }


    return 0;
}

