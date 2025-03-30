// قضیه فیثاغورس 

#include <stdio.h>

int main()
{
    float a, b, c;

    printf("enter the sides of the triangle with names a b c:\n");
    scanf("%f %f %f", &a, &b, &c);

    if (a >= b && a >= c)
    {
        
        if (b * b + c * c > a * a)
        {
            printf("The angle opposite to side a is less than 90 degrees.\n");
        } 
        else if (b * b + c * c < a * a)
        {
            printf("The angle opposite to side a is greater than 90 degrees.\n");
        }
        else
        {
            printf("The angle opposite to side a is exactly 90 degrees.\n");
        }
    }
    else if (b >= a && b >= c)
    {
        if (a * a + c * c > b * b)
        {
            printf("The angle opposite to side b is less than 90 degrees.\n");
        }
        else if (a * a + c * c < b * b)
        {
            printf("The angle opposite to side b is greater than 90 degrees.\n");
        }
        else
        {
            printf("The angle opposite to side b is exactly 90 degrees.\n");
        }
    }
    else
    {
        if (a * a + b * b > c * c)
        {
            printf("The angle opposite to side c is less than 90 degrees.\n");
        }
        else if (a * a + b * b < c * c)
        {
            printf("The angle opposite to side c is greater than 90 degrees.\n");
        }
        else
        {
            printf("The angle opposite to side c is exactly 90 degrees.\n");
        }
    }

    return 0; 
}