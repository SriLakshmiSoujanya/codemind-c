#include<stdio.h>
#include<math.h>
int main()
{
    int a;
     scanf("%d",&a);
    float b;
    b=a/(4.0);
    
    int z = ceil(b);
   
    if(a<=4){
        printf("%d",1);
    }
    else{
        printf("%d",z);
    }
}