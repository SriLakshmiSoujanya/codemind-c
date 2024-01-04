#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f%f",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("%.f
%.f",a,b);
}