#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x=arr[0];
    for(i=0;i<n;i++){
        if(x>arr[i]){
            x=arr[i];
        }
    }
    printf("%d",x);
}