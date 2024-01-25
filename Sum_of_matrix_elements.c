#include<stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    int mat[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    int sum=0;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            sum+=mat[i][j];
        }
    }
    printf("%d",sum);
}