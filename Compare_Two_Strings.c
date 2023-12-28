#include<stdio.h>
#include<string.h>
int main()
{
    char s1[11],s2[11];
    scanf("%s%s",s1,s2);
    int result=strcmp(s1,s2);
    if(result==0)
    {
        printf("Strings are Equal");
    }
    else{
        printf("Strings are not Equal");
    }
}