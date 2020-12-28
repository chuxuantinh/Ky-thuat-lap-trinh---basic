#include <stdio.h>

int TongN(int max)
{
    if (max <= 1) return 1;
    int kq = 1;
    for (int i = 2; i <= max; ++i)
    {
        kq *= i;
    }
    return kq;
}

float Tong(int number)
{
    float sum = 0;

    for (int i = 0; i < number; ++i) {
        sum += pow(number, 2*i) / TongN(2*i);
    }

    return sum;
}

int main()
{
    int number;

    printf("Enter number: ");

    scanf("%d", &number);

    printf("Sum = %f", Tong(number));

    return 0;
}


