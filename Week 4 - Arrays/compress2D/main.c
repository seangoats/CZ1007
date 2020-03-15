#include <stdio.h>
#define SIZE 100
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize);
int main()
{
     int data[SIZE][SIZE];
     int i,j;
     int rowSize, colSize;
     printf("Enter the array size (rowSize, colSize): \n");
     scanf("%d %d", &rowSize, &colSize);
     printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
     for (i=0; i<rowSize; i++)
        for (j=0; j<colSize; j++)
            scanf("%d", &data[i][j]);
     printf("compress2D(): \n");
     compress2D(data, rowSize, colSize);
     return 0;
}
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize)
{
    int row,col;
    int tmp,count;

    for(row=0;row<rowSize;row++)
    {
        count = 0;
        tmp = data[row][0];
        for(col=0;col<colSize;col++)
        {
            if(tmp==data[row][col])
                count++;
            else
            {
                printf("%d ",tmp);
                printf("%d ",count);
                count = 1;
                tmp = data[row][col];
            }

        }
        printf("%d ",tmp);
        printf("%d ",count);
        printf("\n");
    }
}
