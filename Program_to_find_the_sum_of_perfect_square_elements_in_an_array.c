#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        int x=sqrt(arr[i]);
        if(x*x==arr[i])
        {
            sum+=arr[i];
        }
    }
    printf("%d",sum);
}