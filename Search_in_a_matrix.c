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
    int x,flag=0;
    scanf("%d",&x);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(x==mat[i][j])
            {
                flag=1;
            }
        }
    }
    if(flag==1)
    {
        printf("1");
    }
    else{
        printf("0");
    }
}