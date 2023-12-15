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
    int p=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            p=arr[i];
        }
    }
    printf("%d",p);
}