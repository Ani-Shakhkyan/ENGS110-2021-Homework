#include <math.h>
#include <stdio.h>

void first_order_equation(int k, int b)
{
    float x;
    
    x = -b/k;
    printf("x = %f\n",x);
}

void second_order_equation(int a, int b, int c)
{
    int d;
    float x1, x2;
    
    d = b*b - 4*a*c;
    if(d < 0)
        printf("No solution\n");
    else if(d == 0)
    {
        x1 = -b / (2*a);
        printf("The only solution is x = %f\n", x1);
    }
    else
    {
         x1 = (-b - sqrt(d))/(2*a);
         x2 = (-b + sqrt(d))/(2*a);
        printf("There are two solutions: x1 = %f, x2 = %f\n", x1,x2);
    }
}

int main()
{
    first_order_equation(3,6);
    second_order_equation(3,5,10);
    return 0;
}
