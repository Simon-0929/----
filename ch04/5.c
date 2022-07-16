#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BIT 8

int main(void)
{
    float speed,size,time;

    printf("please enter net speed(Mbit/s) : ");
    scanf("%f", &speed);
    printf("please enter file size(MB) :");
    scanf("%f", &size);

    time = size*BIT/speed;
    printf("At %.2f megabits per second, ", speed);
    printf("a file of %.2f megabytes\n", size);
    printf("downloads in %.2f seconds. \n", time);

    system("pause");
    return 0;
}
