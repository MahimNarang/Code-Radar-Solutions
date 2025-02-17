#include<stdio.h>
int main()
{
    int a,b,c;
    char x;
    scanf("%d %d %c", &a, &b, &x);
    if(x =='+'){
        c=a+b;
        printf(c);
    }
    else if(x=='-'){
        c=a-b;
        printf(c);
    }
    else if(x=='*'){
        c=a*b;
        printf(c);
    }
    else{
        c=a/b;
        printf(c);
    }
    return 0;
}