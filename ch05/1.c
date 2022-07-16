#include <stdio.h>
#include <stdlib.h>

#define S1 60

int main(void)
{
    int minute1,hour1;

    printf("please enter a number : ");
    while((scanf("%d",&minute1)==1)  && (minute1>0) )
    {
        printf("%d minutes = %d hours and %d minutes\n", minute1,(minute1/S1),(minute1%S1));
        printf("please enter a number : ");
    }

    system("pause");
    return 0;
}
