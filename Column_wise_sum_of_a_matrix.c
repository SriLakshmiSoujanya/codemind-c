#include<stdio.h>
int main()
{
    int i,j,r,c;
    scanf("%d%d",&r,&c);
    int mat[i][j];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(j=0;j<c;j++)
    {
        int sum=0;
        for(i=0;i<r;i++)
        {
           sum+=mat[i][j];
        }
     printf("%d ",sum);
    }
}