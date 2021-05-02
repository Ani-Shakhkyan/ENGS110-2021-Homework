#include <stdio.h>

int main()
{
    int c, num;
    printf("please insert your age :");
    scanf("%d", &num);
    int b = 64;
    while(b >= 0)
    {
        c = num >> b;
        if(c & 1)
            printf("1");
        else
            printf("0");
        b--;
    }
}