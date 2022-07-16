#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int x,y;
    char first[20],last[20];

    printf("please enter your first name: ");
    scanf("%s", first);
    printf("please enter your last name:");
    scanf("%s", last);

    x=strlen(first);
    y=strlen(last);

    printf("%s %s\n", first,last);
    printf("%*d %*d\n", x,x,y,y);
    printf("%s %s\n", first,last);
    printf("%-*d %-*d\n", x,x,y,y);

    system("pause");
    return 0;
}
