#include<stdio.h>
int main()
{
    int n,i,j,fc,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int fc=0;
        for(j=1;j<=i;j++){
            if(i%j==0)
            {
                fc++;
            }
        }
        if(fc==9)
        {
            printf("%d ",i);
            sum++;
        }
    }
    printf("
Total=%d",sum);
}