#include <stdio.h>

int DeQuy(int n);
int KhuDeQuy(int number);

int DeQuy(int n)
{
    if (n <= 1) return 1;

    return DeQuy(n - 1) + n;
}

int KhuDeQuy(int number)
{
    int sum = 0;
    for (int i = 1; i <= number; ++i)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int number;

    printf("Number: ");
    scanf("%d", &number);

    printf("De quy: %d\n", DeQuy(number));
    printf("Khu de quy: %d", KhuDeQuy(number));

    return 0;
}
