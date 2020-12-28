#include <stdio.h>
#include <math.h>

int Tong(int number)
{
    int sum = 0;

    for (int i = 1; i <= number; ++i) {
        sum += pow(number, i);
    }

    return sum;
}

int main()
{
    int number;

    printf("Enter number: ");

    scanf("%d", &number);

    printf("Sum = %d", Tong(number));

    return 0;
}

