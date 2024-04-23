
#include <stdio.h>
int main(void)
{
    unsigned int a, b, c;
    //float k, b;

    scanf ("%d %d %d", &a, &b, &c);

    if ((a<b)&&(b<c))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}

