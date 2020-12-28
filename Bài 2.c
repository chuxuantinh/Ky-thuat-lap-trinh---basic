#include <stdio.h>
#include <math.h>

int DeQuy(int n);
int KhuDeQuy(int n);

int DeQuy(int n)
{
    if (n <= 1)
        return 1;
    return DeQuy(n - 1) + pow(n, 2);
}

int KhuDeQuy(int n)
{
    int sum = 0;

    for (int i = 1; i <= n; ++i)
    {
        sum += pow(i, 2);
    }

    return sum;
}

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    printf("De quy: %d\n", DeQuy(number));
    printf("Khu de quy: %d", KhuDeQuy(number));

    return 0;
}
