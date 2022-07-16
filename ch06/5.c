#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch;

    printf("please enter a letter : ");
    scanf("%c", &ch);

    for(char c='A';c<=ch;c++)
    {

       for(char c1=c;c1<ch;c1++)
            printf(" ");

        char c2;

        for(c2='A';c2<=c;c2++)
            printf("%c",c2);

        for(c2=c-1;c2>='A';c2--)
            printf("%c",c2);

        printf("\n");
    }

    system("pause");
    return 0;
}
