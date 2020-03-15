#include <stdio.h>
int rCountEvenDigits1(int num);
void rCountEvenDigits2(int num, int *result);
int main()
{
 int number, result;

 printf("Enter the number: \n");
 scanf("%d", &number);
 printf("rCountEvenDigits1(): %d\n", rCountEvenDigits1(number));
 rCountEvenDigits2(number, &result);
 printf("rCountEvenDigits2(): %d\n", result);
 return 0;
}
int rCountEvenDigits1(int num)
{
  if(num<10)
  {
    return (num%2==0)?1:0;
  }
  else
  {
    return (num%2==0)?(1+rCountEvenDigits1(num/10)):(rCountEvenDigits1(num/10));
  }
}
void rCountEvenDigits2(int num, int *result)
{
  static int p = 0;
  if(num<10)
  {
    p += (num%2==0)?1:0;
  }
  else
  {
    p += (num%2==0)?1:0;
    rCountEvenDigits2(num/10, &p);
  }
  *result = p;
}
