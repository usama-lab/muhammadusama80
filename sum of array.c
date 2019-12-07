#include<stdio.h>
int main(void)

{
    int a[3][3]={{2,4,6},{8,9,1},{3,7,8}};
    int b[3][3]={{3,1,7},{0,1,2},{5,2,4}};
    int sum[3] [3];
    int row, col;
    for (row=0; row<=2; row++)
    {
        for(col=0; col<=2; col++)
        {
            sum[row] [col] = a [row] [col] + b[row] [col];
        }
    }
    for (row=0; row<=2; row++)
    {
        for (col=0; col<=2; col++)
        {
            printf("%d", sum[row][col]);
            printf("\t");
        }
        printf("\n");
    }
}
