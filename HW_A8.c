
#include <stdio.h>
int main(void)
{
    signed int a, b, c;
   // printf("Input numbers:\n"); //Вывести на экран подсказку
    scanf ("%d %d %d", &a, &b, &c);
    //printf("%.2f\n", (double)(1.*(a+b+c)/3)); //Вывести на экран подсказку
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

