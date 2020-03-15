#include <stdio.h>
#include <string.h>
#define INIT_VALUE -1
int countSubstring(char str[], char substr[]);
int main()
{
     char str[80], substr[80], *p;
     int result=INIT_VALUE;

     printf("Enter the string: \n");
     fgets(str, 80, stdin);
     if (p=strchr(str,'\n')) *p = '\0';
     printf("Enter the substring: \n");
     fgets(substr, 80, stdin);
     if (p=strchr(substr,'\n')) *p = '\0';
     result = countSubstring(str, substr);
     printf("countSubstring(): %d\n", result);
     return 0;
}
int countSubstring(char str[], char substr[])
{
    char*s = str;
    char*subs = substr;
    int count = 0;
    int len = 0;
    int subStringLen = strlen(substr);
    while(*s!='\0')
    {
        if(*s==*subs)
        {
            len+=1;
            subs++;
            s++;
        }
        else
        {
            len = 0;
            subs = substr;
            if(*s==*subs)
            {
                len += 1;
                subs++;
            }
            s++;
        }
        if(len==subStringLen)
        {
            count += 1;
            len = 0;
            subs = substr;
        }
    }
    return count;
}
