// اعداد فرد

#include <stdio.h>  

int main()
{  
    int n;

    printf("enter a number: \n");
    scanf("%d", &n);

    if(n % 2 != 0)
    {
        printf("odd: %d \n", n);
    }
    else
    {
        printf("not odd!");
    }
    return 0;

}