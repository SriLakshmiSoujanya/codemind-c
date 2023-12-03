#include<stdio.h>
int main()
{
    int x,y,p,q;
    scanf("%d%d",&x,&y);
    p=(500-((x+y)*2))+(1000-(y*4));
    q=(500-(x*2))+(1000-((x+y)*4));
    if(p>q){
        printf("%d",p);
    }
    else{
        printf("%d",q);
    }
}