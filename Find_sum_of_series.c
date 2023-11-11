#include<stdio.h>
int main()
{
    float i,a,sum=0,d=0;;
    scanf("%f",&a);
    for(i=1;i<=a;i++)
    {
        sum += 1.0/(i+d);
    }
    printf("%.2f",sum);
}