#include <stdio.h>

void Divisor(int number)
{
    for (int i = 1; i <= number; ++i)
    {
        if (number % i == 0)
        {
            printf("%d\t", i);
        }
    }
}

int main()
{
    int number;

    printf("Enter number: ");

    scanf("%d", &number);

    printf("Divisor: ");

    Divisor(number);

    return 0;
}
