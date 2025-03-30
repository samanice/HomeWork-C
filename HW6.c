// ماشین حساب

#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else 
        return n * factorial(n - 1);
}

int main()
{
    int choice, a, b, result;

    while (1)
    {
        printf("\nSimple calculator:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Factorial\n");
        printf("0. Exit\n");
        printf("Please select the desired operation: ");
        
        if (scanf("%d", &choice) != 1)
        { 
            printf("Invalid input! Please enter an integer.\n");
            while (getchar() != '\n');
            continue;
        }

        if (choice == 0)
        {
            printf("Exit the program...\n");
            break;
        }

        switch (choice)
        {
            case 1:
                printf("Enter 2 numbers: ");
                scanf("%d %d", &a, &b);
                result = a + b;
                printf("Addition result: %d\n", result);
                break;

            case 2:
                printf("Enter 2 numbers: ");
                scanf("%d %d", &a, &b);
                result = a - b;
                printf("Subtraction result: %d\n", result);
                break;

            case 3:
                printf("Enter 2 numbers: ");
                scanf("%d %d", &a, &b);
                result = a * b;
                printf("Multiplication result: %d\n", result);
                break;

            case 4:
                printf("Enter 2 numbers (numerator and denominator): ");
                scanf("%d %d", &a, &b);
                if (b == 0)
                    printf("Error: Division by zero is not possible!\n");
                else {
                    result = a / b;
                    printf("Division result: %d\n", result);
                }
                break;

            case 5:
                printf("Enter the desired number for the factorial: ");
                scanf("%d", &a);
                if (a < 0)
                    printf("Factorial is not defined for negative numbers!\n");
                else {
                    result = factorial(a);
                    printf("Factorial of %d is: %d\n", a, result);
                }
                break;

            default:
                printf("Invalid selection! Please enter a number between 0 and 5.\n");
        }
    }

    return 0;
}