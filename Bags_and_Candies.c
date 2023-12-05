#include<stdio.h>
#include<math.h>
int main()
{
    float n,k,m,x;
    scanf("%f%f%f",&n,&k,&m);
    x=k*m;
    x=ceil(n/x);
    printf("%.f",x);
}