#include<stdio.h>
int main()
{
    float x,b;
    scanf("%f",&x);
    if(x<200){
        b = x*1.20;
        if (b<400){
            printf("%.2f",b+100);
        }
        else if(b>400){
            printf("%.2f",b+(b*0.15));
        }
    }
    if(x>=200 && x<400){
        b = x*1.50;
        if(b<400){
            printf("%.2f",b+100);
        }
        else if(b>400){
            printf("%.2f",b+(b*0.15));
        }
    }
    if(x>=400 && x<600){
        b = x*1.80;
        if(b<400){
            printf("%.2f",b+100);
        }
        else if(b>400){
            printf("%.2f",b+(b*0.15));
        }
    }
    if(x>=600){
    b = x*2.0;
    if(b<400){
        printf("%.2f",b+100);
    }
    else if(b>400){
        printf("%.2f",b+(b*0.15));
    }
    }
}