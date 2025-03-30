// شمارش ارقام یک عدد

#include <stdio.h>

int main()
{
    int n, c = 0;

    printf("enter a integer number:");
    scanf("%d", &n);
    
        while (n != 0)
        {
            n /= 10;
            c ++;
        }
    

    printf("Result: %d\n", c);

    return 0;
}