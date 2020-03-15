#include <stdio.h>
#include <math.h>
void specialNumbers1D(int ar[], int num, int *size);
int main()
{
     int a[20],i,size=0,num;

     printf("Enter a number (between 100 and 999): \n");
     scanf("%d", &num);
     specialNumbers1D(a, num, &size);
     printf("specialNumbers1D(): ");
     for (i=0; i<size; i++)
        printf("%d ",a[i]);
     return 0;
}
void specialNumbers1D(int ar[], int num, int *size)
{
    int i;
    int sum;
    int j=0;
    for(i=100;i<num&&num<=999;i++)
    {
        sum = pow(i%10,3)+pow((i/10)%10,3)+pow((i/100)%10,3);
        if(sum==i)
        {
            *size += 1;
            ar[j] = i;
            j++;
        }

    }
}
