#include <stdio.h>
#include <string.h>
int longWordLength(char *s);
int main()
{
     char str[80], *p;

     printf("Enter a string: \n");
     fgets(str, 80, stdin);
     if (p=strchr(str,'\n')) *p = '\0';
     printf("longWordLength(): %d\n", longWordLength(str));
     return 0;
}
int longWordLength(char *s)
{
    int len=0;
    int max=0;
    while(*s!='\0')
    {
        if(*s!=' '&&(*s>='a'&&*s<='z')||(*s>='A'&&*s<='Z')) // to check if alphabet
            len += 1;
        else
        {
            if(max<len)
                max = len;
            len = 0;
        }
        s++;
    }
    return max;

}
