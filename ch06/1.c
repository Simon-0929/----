#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char num[26];

    for(int i=0;i<26;i++)
    {
        num[i] = 'a'+i ;
    }

    for(int i=0;i<26;i++)
    {
        printf("%c", num[i]);
    }

    system("pause");
    return 0;
}
