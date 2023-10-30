#include<stdio.h>
int main()
{
    int B;
    float D,H;
    scanf("%d",&B);
    if(B<=10000){
    D = (0.8)*B;
    H = (0.2)*B;
        printf("%.2f",B+D+H);
    }
    else if(B<=20000 && B>10000){
    D = (0.9)*B;
    H = (0.25)*B;
        printf("%.2f",B+D+H);
    }
    else{
    D = (0.95)*B;
    H = (0.3)*B;
        printf("%.2f",B+D+H);
    }
}