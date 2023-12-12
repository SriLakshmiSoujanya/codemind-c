#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int even=0,odd=0,t;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even+=arr[i];
        }
        if(arr[i]%2!=0)
        {
            odd+=arr[i];
        }
    }
    printf("%d",abs(even-odd));
}