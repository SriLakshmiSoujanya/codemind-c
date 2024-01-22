#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int i,count=0;
    for(i=0;str[i]!=NULL;i++)
    {
        count++;
    }
    printf("%d",count);
}