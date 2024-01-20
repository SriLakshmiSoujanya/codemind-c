#include<stdio.h>
int main()
{
    int i;
    char str[101];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=0;i++)
        if(str[i]>=65&&str[i]<=90)
        {
            str[i]+=32;
        }
        printf("%s",str);
}