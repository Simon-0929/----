#include <stdio.h>
#include <stdlib.h>

#define GALLON 3.785f
#define MILE_TO_KM 1.609f

int main(void)
{
    float range,oil;

    printf("please input the range you traveled(in mile) : ");
    scanf("%f", &range);
    printf("please input the oil you spend(ingallon) :");
    scanf("%f", &oil);

    printf("Fuel consumptions:\n");
    printf("In USA, your oil wear is %.1f mile/gallon.\n",range/oil);
    printf("In Europe , your oil wear is ");
    printf("%.1f litre/100km.\n", (oil * GALLON) / (range * MILE_TO_KM));

    system("pause");
    return 0;
}

