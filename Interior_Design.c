#include<stdio.h>
int main()
{
    int x,y,x1,y1,x2,y2;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    x = x1+y1;
    y = x2 + y2;
    if(x<y){
        printf("%d",x);
    }
    else{
        printf("%d",y);
    }
    
}
