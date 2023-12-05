#include<stdio.h>
int main()
{
    int a,b,c,x;
    scanf("%d%d%d",&a,&b,&c);
    x=(a>c&&b>c)?a+b:(b>a&&c>a)?b+c:a+c;
    printf("%d",x);
}