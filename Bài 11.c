#include <stdio.h>

int GiaiThua(int max)
{
    if (max <= 1) return 1;
    int kq = 1;
    for (int i = 2; i <= max; ++i)
    {
        kq *= i;
    }
    return kq;
}

int Tong(int number)
{
    int sum = 0;

    for (int i = 1; i <= number; ++i) {
        sum += GiaiThua(i);
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
