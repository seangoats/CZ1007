#include <stdio.h>
#include <math.h>

int reverseDigits1(int num);
void reverseDigits2(int num, int *result);
int main()
{
     int num, result=999;
     printf("Enter a number: \n");
     scanf("%d", &num);
     printf("reverseDigits1(): %d\n", reverseDigits1(num));
     reverseDigits2(num, &result);
     printf("reverseDigits2(): %d\n", result);
     return 0;
}
int reverseDigits1(int num)
{
    int numl = num;
    int length=0;
    int result=0;
    while(1) // find length
    {
        numl /= 10;
        length += 1;
        if(numl==0)
            break;
    }

    while(num!=0)
    {
        if(num%10==0)
        {
            length--;
            num /= 10;
        }
        else
        {
            result += (num%10)*pow(10,length-1);
            num /= 10;
            length--;
        }
    }

    return result;


}
void reverseDigits2(int num, int *result)
{
    int length=0;
    *result = 0;

    length = floor(log10(num))+1;

        while(num!=0)
    {
        if(num%10==0)
        {
            length--;
            num /= 10;
        }
        else
        {
            *result += (num%10)*pow(10,length-1);
            num /= 10;
            length--;
        }
    }

}
