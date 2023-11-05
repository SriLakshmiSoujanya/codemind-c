#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    
    for(int i=1;i<=t;i++)
    {
        int n,m,k;
        scanf("%d %d %d",&n,&m,&k);
        
        if(m - k>=n)
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
    }
}