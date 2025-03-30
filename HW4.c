// جمع اعداد زوج

#include <stdio.h>

int even(int n)
{
    int sum = 0;
    for (int i = 2; i <= n; i += 2)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int n;

    printf("Please enter integer number:");
    scanf("%d", &n);

    int result = even(n);

    printf("Result: %d %d \n", n, result);

    return 0;
}