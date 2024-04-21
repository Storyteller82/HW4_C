
#include <stdio.h>
int main(void)
{
    signed int a, b;
   // printf("Input numbers:\n"); //Вывести на экран подсказку
    scanf ("%d %d", &a, &b);
    //printf("%.2f\n", (double)(1.*(a+b+c)/3)); //Вывести на экран подсказку
    if (a<b)
    {
        printf("%d %d", a, b);
    }
    else
    {
        printf("%d %d", b, a);
    }

    return 0;
}

