#include <stdio.h>

void Divisor_SoLe(int number)
{
    for (int i = 1; i <= number; ++i)
    {
        if (number % i == 0 && i % 2 != 0)
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

    Divisor_SoLe(number);

    return 0;
}
