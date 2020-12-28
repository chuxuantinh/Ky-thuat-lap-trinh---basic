#include <stdio.h>

float Sum(int n)
{
    float sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        sum += i/(i + 1.0);
    }
    return sum;
}

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    printf("Sum = %f", Sum(number));

    return 0;
}
