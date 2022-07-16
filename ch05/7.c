#include <stdio.h>

void cube(double c);

int main(void)
{

    double n;
    printf("please you enter a double number : ");
    scanf("%lf", &n);
    cube(n);

    system("pause");
    return 0;
}

void cube(double c)
{

    printf("The cube of %lf is %lf.\n", c,c*c*c);

}
