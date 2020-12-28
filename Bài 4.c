#include <stdio.h>

float Sum(int n)
{
    float sum = 0;
    for (int i = 2; i <= 2*n; i += 2) {
        sum += 1.0/i;
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
