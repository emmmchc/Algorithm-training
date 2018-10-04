/*字符串逆序*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[101];
    int i=0;
    gets(str);//读入带空格的字符串用gets
    while(str[i]!='\0')
        i++;
    i--;
    for(; i>=0; i--)
        printf("%c",str[i]);
    return 0;
}
