#include <stdio.h>

int Divisor_Tich(int number)
{
    int sum = 1;
    for (int i = 1; i <= number; ++i)
    {
        if (number % i == 0)
        {
            sum *= i;
        }
    }
    return sum;
}

int main()
{
    int number;

    printf("Enter number: ");

    scanf("%d", &number);

    printf("Divisor: %d", Divisor_Tich(number));

    return 0;
}


