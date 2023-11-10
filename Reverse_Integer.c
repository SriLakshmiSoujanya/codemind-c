#include<stdio.h>
int main()
{
    int r,rev=0,i,n,t;
    scanf("%d",&n);
    t=n;
    {
        while(n!=0)
        {
         r=n%10;
        rev=rev*10+r;
        n=n/10;   
        }
    }
    printf("%d",rev);
}