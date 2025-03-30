// روز های هفته

#include <stdio.h>

void weekdays(int n)
{
    switch (n)
    {
        case 1:
            printf("Saturday\n");
            break;
        case 2:
            printf("Sunday\n");
            break;
        case 3:
            printf("Monday\n");
            break;
        case 4:
            printf("Tuesday\n");
            break;
        case 5:
            printf("Wednesday\n");
            break;
        case 6:
            printf("Thursday\n");
            break;
        case 7:
            printf("Friday\n");
            break;
        default:
            printf("Invalid input. Please enter a number between 1 and 7.\n");
            break;
    }
}

int main()
{
    int n; 

    printf("Enter numbers between 1 and 7:\n");

    while (scanf("%d", &n)) 
    {
        weekdays(n);
    }

    return 0;
}