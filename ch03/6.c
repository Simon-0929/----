#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double m = 3.0E-23;
    float n;
    int g = 950;

    printf("�H�j�欰����J���q: ");
    scanf("%f", &n);

    printf("�o���Y�� %lf �Ӥ����l�C\n", n * g / m);

    system("pause");
    return 0;
}
