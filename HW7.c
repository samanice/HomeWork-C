// میانگین گیری

#include <stdio.h>  

int main()
{  
    int n;
    float sum = 0.0, number;

    printf("enter the number: \n");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("enter some numbers\n");
        scanf("%f", &number);
        sum += number;
    }

    float average = sum / n;

    printf ("answer: %2.f \n", average);

    return 0;  
}