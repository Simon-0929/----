#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float input;
    printf("please enter a namber : ");
    scanf("%f",&input);

    printf("The input is %+.2f or %.2e.", input,input);
    system("pause");
    return 0;
}
