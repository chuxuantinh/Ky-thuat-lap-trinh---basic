#include <stdio.h>
#include <math.h>

double Power(int x, int y);

double Power(int x, int y) {
    return pow(x, y);
}

int main()
{
    int x, y;

    printf("Enter power x y: ");
    scanf("%d%d", &x, &y);

    printf("Power(%d, %d) = %lf", x, y, Power(x, y));

    return 0;
}
