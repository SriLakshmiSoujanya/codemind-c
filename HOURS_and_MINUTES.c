#include<stdio.h>
int main()
{
    int a,b,n;
    scanf("%d",&n);
    b=n/60;
    a=n%60;
    printf("%d Hour(s) %d Minute(s)",b,a);
}