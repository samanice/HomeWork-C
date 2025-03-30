// اعداد خوش ترتیب

#include <stdio.h>

int KHBtartib(int n)
{ 
    int previousDigit = 10;
    int currentDigit;

    while (n > 0)
    {
        currentDigit = n % 10;
        if (currentDigit > previousDigit)
        {
            return 0; 
        }
        previousDigit = currentDigit;
        n /= 10;
    }
    return 1;
}

int KHBtatib2(int n)
{
    int previousDigit = -1;
    int currentDigit;

    while (n > 0)
    {
        currentDigit = n % 10;
        if (currentDigit < previousDigit)
        {
            return 0; 
        }
        previousDigit = currentDigit; 
        n /= 10; 
    }
    return 1;
}

int main()
{
    int number;

    printf("Please enter the number:");
    scanf("%d", &number);

    if ( KHBtartib(number) || KHBtatib2(number))
    {
        printf("khosh tartib!\n");
    }
    else
    {
        printf("bad tartib!\n");
    }

    return 0;
}