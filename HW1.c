  //    جدول ضرب ۱ تا ۱۰

#include <stdio.h>

int table()
{
    printf("\t");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\t", i);
    }
    printf("\n");

    for (int i = 0; i <= 10; i++)
    {
        printf("-----------");
    }
    printf("\n");

    for (int i = 1; i <= 10; i++)
    {
        printf("%d |\t", i);
        for (int j = 1; j <= 10; j++)
        {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
}

int main()
{
    table();

    return 0;
}