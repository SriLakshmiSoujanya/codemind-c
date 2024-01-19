#include<stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    int arr[a][b];
    for(i=0;i<b;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int a1,b1;
    scanf("%d%d",&a1,&b1);
    int arr2[a1][b1];
    for(i=0;i<b;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    if(a==a1&&b==b1)
    {
        for(i=0;i<a;i++)
        {
            for(j=0;j<b1;j++)
            {
                printf("%d ",arr[i][j]+arr2[i][j]);
            }
        printf("
");
    }
    }
}