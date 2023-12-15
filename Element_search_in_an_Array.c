#include<stdio.h>
int main()
{
    int i,n,p;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count=0;
    scanf("%d",&p);
    for(i=0;i<n;i++)
    {
        if(p==arr[i])
        {
           count++;
        }
    }
    if(count>=1)
    {
        printf("True");
    }
    else{
        printf("False");
    }
}