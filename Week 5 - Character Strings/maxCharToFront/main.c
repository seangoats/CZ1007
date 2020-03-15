#include <stdio.h>
#include <string.h>
void maxCharToFront(char *str);
int main()
{
     char str[80], *p;

     printf("Enter a string: \n");
     fgets(str, 80, stdin);
     if (p=strchr(str,'\n')) *p = '\0';
     printf("maxCharToFront(): ");
      maxCharToFront(str);
     puts(str);
     return 0;
}
void maxCharToFront(char *str)
{
    char max=str[0];
    char tmp;
    int index;
    int i=0;
    while(str[i]!='\0')
    {
        if(max<str[i])
        {
            max = str[i];
            index = i;
        }
        i++;
    }
    if(max!=str[0])
    {
        tmp = str[0];
        str[0] = max;
        str[index] = tmp;
    }

}
