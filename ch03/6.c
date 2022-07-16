#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double m = 3.0E-23;
    float n;
    int g = 950;

    printf("以夸脫為單位輸入水量: ");
    scanf("%f", &n);

    printf("這裏頭有 %lf 個水分子。\n", n * g / m);

    system("pause");
    return 0;
}
