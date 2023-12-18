#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int p,sum=0;
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    p=(sum)/(n);
    int x;
    for(i=0;i<n;i++)
    {
    if(p==arr[i])
    {
        x=arr[i];
        break;
    }
    }
    if(x==p)
    {
        printf("True");
    }
    else{
        printf("False");
    }
}