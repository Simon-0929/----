#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main(void)
{
    float f1 = 1.0/3.0;
    double d1 = 1.0/3.0;

    printf("f_value = %.4f ; d_value = %.4lf\n", f1,d1);
    printf("f_value = %.12f ; d_value = %.12lf\n", f1,d1);
    printf("f_value = %.16f ; d_value = %.16lf\n", f1,d1);

    printf("FLT_DIG = %d , DBL_DIG = %d\n",FLT_DIG,DBL_DIG);

    system("pause");
    return 0;
}
