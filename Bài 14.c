#include <stdio.h>
#include <math.h>

int Tong(int number)
{
    int sum = 0;

    for (int i = 0; i < number; ++i) {
        sum += pow(number, 2*i + 1);
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



