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
    int sum=0,a,count=0,p;
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    p=sum/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]<=p)
        {
            count++;
        }
    }
    printf("%d",count);
}