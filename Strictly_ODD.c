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
    int count=0,t=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2 !=0)
        {
            count++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0 && i%2 !=0)
        {
            t++;
        }
    }
    if(t==count)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}