#include <stdio.h>

int Divisor_SoChan_Sum(int number)
{
    int sum = 0;
    for (int i = 1; i <= number; ++i)
    {
        if (number % i == 0 && i % 2 == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    int number;

    printf("Enter number: ");

    scanf("%d", &number);

    printf("Divisor: %d", Divisor_SoChan_Sum(number));

    return 0;
}

