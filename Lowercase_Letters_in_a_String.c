#include<stdio.h>
int main()
{
    int i;
    char str[101];
    scanf("%[^
]s",str);
    int count=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>=97&&str[i]<=122)
        {
            count++;
        }
    }
    printf("%d",count);
}