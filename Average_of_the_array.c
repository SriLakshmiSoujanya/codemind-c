#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    float sum=0;
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("%.2f",sum/n);
}