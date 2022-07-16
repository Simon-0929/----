#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double SEC_PER_YEAR = 3.156E7;
    int age;

    printf("How old are you : ");
    scanf("%d", &age);

    printf("%d year(s) = %lf seconds\n", age, age * SEC_PER_YEAR);

    //  %lf  代表双精度浮点型数据（double）

    system("pause");
    return 0;
}
