#include <stdio.h>

int Divisor_Count(int number)
{
    int count = 0;
    for (int i = 1; i <= number; ++i)
    {
        if (number % i == 0)
        {
            ++count;
        }
    }
    return count;
}

int main()
{
    int number;

    printf("Enter number: ");

    scanf("%d", &number);

    printf("Divisor: %d", Divisor_Count(number));

    return 0;
}



