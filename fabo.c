#include<stdio.h>
int main(void)
{
    int i, n, t1=0, t2=1, nextterm;
    printf("Enter The Number Of Term");
    scanf("%d", &n);
    printf("Fibonachi Series");
    for (i=1; i<=n; ++i)
    {
        printf("%d", t1);
        nextterm = t1 + t2 ;
        t1 = t2;
        t2 = nextterm;
    }
    return 0;
}

