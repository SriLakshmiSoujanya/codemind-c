#include<stdio.h>
int main()
{
    int n,x=0,r;
    scanf("%d",&n);
    while(n>0)
    {
        n%10;
        if(n%10>x)
        {
            x=n%10;
        }
        n/=10;
    }
    printf("%d",x);
}