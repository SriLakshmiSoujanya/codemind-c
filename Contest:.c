#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&c,&a,&b);
    if(c <= (1*a)+(2*b)){
        printf("Qualify");
    }
    else{
        printf("Not Qualify");
    }
}