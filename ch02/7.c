#include <stdio.h>
#include <stdlib.h>

void one_three();
void two();
int main(viod)
{
    printf("starting now: \n");
    one_three();
    printf("done!\n");

    system("pause");
    return 0;

}
void one_three()
{
    printf("one \n");
    two();
    printf("three \n");
}
void two()
{
    printf("two \n");
}
