#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        int fc=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                fc++;
            }
        }
        if(fc==2)
        {
            printf("%d
",i);
        }
    }
}