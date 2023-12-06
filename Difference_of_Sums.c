#include<stdio.h>
int main()
{
    int n,sq_sum=0,i,y=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    sq_sum+=i*i;
    y+=i;
    }
    printf("%d",(y*y)-sq_sum);
}