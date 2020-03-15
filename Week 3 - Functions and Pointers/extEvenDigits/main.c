#include <stdio.h>

#define INIT_VALUE 999
int extEvenDigits1(int num);
void extEvenDigits2(int num, int *result);
int main()
{
     int number, result = INIT_VALUE;

     printf("Enter a number: \n");
     scanf("%d", &number);
     printf("extEvenDigits1(): %d\n", extEvenDigits1(number));
     extEvenDigits2(number, &result);
     printf("extEvenDigits2(): %d\n", result);
     return 0;
}
int extEvenDigits1(int num)
{
    int i=0;
    int result = 0;
    int tens=1;
    while(num!=0)
    {
        if(num%2==0)
        {
            result += (num%10)*tens;
            i++;
            tens *= 10;
        }
        num /= 10;
    }

    return result?result:-1;
}
void extEvenDigits2(int num, int *result)
{
    int i=0;
    *result = 0;
    int tens=1;
    while(num!=0)
    {
        if(num%2==0)
        {
            *result += (num%10)*tens;
            i++;
            tens *= 10;
        }
        num /= 10;
    }
    *result = *result?*result:-1;
}
