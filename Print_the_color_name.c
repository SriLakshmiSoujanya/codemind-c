#include<stdio.h>
int main()
{
    char N,V,I,B,G,Y,O,R;
    scanf("%c",&N);
    if(N=='V'){
        printf("Violet");
    }
    else if(N=='I'){
        printf("Indigo");
    }
    else if(N=='B'){
        printf("Blue");
    }
    else if(N=='G'){
        printf("Green");
    }
    else if(N=='Y'){
        printf("Yellow");
    }
    else if(N=='O'){
        printf("Orange");
    }
    else if(N=='R'){
        printf("Red");
    }
    else{
        printf("-1");
    }
}