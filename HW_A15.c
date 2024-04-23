
#include <stdio.h>
int main(void)
{
    signed int x1, y1, x2, y2, delta_x, delta_y;
    float k, b;

    scanf ("%d %d %d %d", &x1, &y1, &x2, &y2);

    delta_x = x2 - x1;
    delta_y = y2 - y1;
    k = (float)delta_y / (float)delta_x;
    b = (float)(y1 - k*x1);




        printf("%.2f %.2f", k, b);


    return 0;
}

