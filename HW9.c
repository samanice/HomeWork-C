// معکوس کردن اعداد

#include <stdio.h>

int main()
{
    int n, reversedNumber = 0;

    printf("enter a number:");
    scanf("%d", &n);

    while (n != 0)
    {
        int digit = n % 10;
        reversedNumber = reversedNumber * 10 + digit; 
        n /= 10;
    }

    printf("reverse number: %d\n", reversedNumber);

    return 0;
}