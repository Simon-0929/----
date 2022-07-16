#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char name[20];
    int slong;

    printf("please enter your name : ");
    scanf("%s",name);

    slong=strlen(name);

    printf("a : \"%s\" \n", name);
    printf("b : \"%20s\" \n", name);
    printf("c : \"%-20s\" \n", name);
    printf("a : \"%*s\" \n", slong+3,name);

    system("pause");
    return 0;
}
