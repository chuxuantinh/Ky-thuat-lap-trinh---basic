#include <stdio.h>

float DeQuy(int n);
float KhuDeQuy(int n);

float DeQuy(int n)
{
    if (n <= 1) return 1;
    return 1.0/n + DeQuy(n - 1);
}

float KhuDeQuy(int n)
{
    float sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += 1.0/i;
    }
    return sum;
}

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    printf("De quy: %f\n", DeQuy(number));
    printf("Khu de quy: %f", KhuDeQuy(number));

    return 0;
}
