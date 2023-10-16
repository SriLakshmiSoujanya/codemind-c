#include<stdio.h>
int main()
{
    char P,a,e,i,o,u,A,E,I,O,U;
    scanf("%c",&P);
    if(P=='a'||P=='e'||P=='i'||P=='o'||P=='u'||P=='A'||P=='E'||P=='I'||P=='O'||P=='U'){
        printf("VOWEL");
    }
    else{
        printf("CONSONANT");
    }
}