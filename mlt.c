#include<stdio.h>
int main(void)
{

    int a[3][3] = {{2,3,5,},{6,9,1},{2,7,5}};
    int b[3][3] = {{2,3,5,},{6,9,1},{2,7,5}};
    int c[3][3] , i , j , k , sum;

    for(i = 0; i <= 2; i++)
    {
        for(j = 0; j <= 2; j++)
        {
            sum = 0;
            for(k = 0; k <= 2; k++)
            {
                sum = sum + a[i][k] *  b[k][j];
            }

            c[i][j] = sum;
        }
    }

    printf("Product of two matrix is:\n\n");
    for(i = 0; i <= 2; i++)
    {
        for(j = 0; j <= 2; j++)
        {

            printf("%d",c[i][j]);
            printf("\t");
        }printf("\n\n");
    }
}
