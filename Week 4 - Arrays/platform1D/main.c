#include <stdio.h>
int platform1D(int ar[], int size);
int main()
{
     int i,b[50],size;
     printf("Enter array size: \n");
     scanf("%d", &size);
     printf("Enter %d data: \n", size);
     for (i=0; i<size; i++)
        scanf("%d",&b[i]);
     printf("platform1D(): %d\n", platform1D(b,size));
     return 0;
}
int platform1D(int ar[], int size)
{
    int i;
    int max=1,realMax=1; // realMax to deal with scenarios with multiple platforms
    int prev = ar[0]; // previous value

    for(i=1;i<size;i++) // start from index 1
    {
        if(ar[i]==prev)
        {
            max += 1;
        }
        else
        {
            max = 1;
        }

        if(max>realMax)
        {
            realMax = max;
        }
        prev = ar[i];

    }

    return realMax;
}
