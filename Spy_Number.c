#include<stdio.h>
int main()
{
    int n,i,r,ds=0,dp=1;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        ds+=r;
        dp*=r;
        n=n/10;
    }
    if(ds==dp)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}