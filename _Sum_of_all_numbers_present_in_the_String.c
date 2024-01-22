#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int i,sum=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(isdigit(str[i]))
        {
            sum+=str[i]-'0';
        }
    }
    printf("%d",sum);
}