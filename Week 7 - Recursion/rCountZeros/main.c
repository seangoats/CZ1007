#include <stdio.h>
int rCountZeros1(int num);
void rCountZeros2(int num, int *result);
int main()
{
 int number, result;

 printf("Enter the number: \n");
 scanf("%d", &number);
 printf("rCountZeros1(): %d\n", rCountZeros1(number));
 rCountZeros2(number, &result);
 printf("rCountZeros2(): %d\n", result);
 return 0;
}
int rCountZeros1(int num)
{
  if(num<10)
    return 0;
  else
  {
    if(num%10==0)
      return 1+rCountZeros1(num/10);
    return rCountZeros1(num/10);
  }
}
void rCountZeros2(int num, int *result)
{
  static int p=0;
  if(num<10)
    return;
  else if(num%10==0)
  {
    p += 1;
    rCountZeros2(num/10,&p);
  }
  else
  {
    rCountZeros2(num/10,&p);
  }
  *result = p;
}
