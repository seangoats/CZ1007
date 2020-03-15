#include <stdio.h>
#define INT_MIN  -2147483648
#define INT_MAX  2147483647

void findMinMax1D(int ar[], int size, int *min, int *max);
int main()
{
     int ar[40];
     int i, size;
     int min, max;
     printf("Enter array size: \n");
     scanf("%d", &size);
     printf("Enter %d data: \n", size);
     for (i=0; i<size; i++)
        scanf("%d", &ar[i]);
     findMinMax1D(ar, size, &min, &max);
     printf("min = %d; max = %d\n", min, max);
     return 0;
}
void findMinMax1D(int ar[], int size, int *min, int *max)
{
    int i;
    *min = INT_MAX;
    *max = INT_MIN;
    for(i=0;i<size;i++)
    {
        if(*min>ar[i])
            *min = ar[i];
        if(*max<ar[i])
            *max = ar[i];

    }
}
