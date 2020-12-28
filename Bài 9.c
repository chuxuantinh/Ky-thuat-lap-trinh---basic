#include <stdio.h>

float Tich(int n)
{
    float kq = 1.0;
    for (int i = 1; i <= n; ++i) {
        kq *= i;
    }
    return kq;
}

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    printf("Tich = %f", Tich(number));

    return 0;
}
