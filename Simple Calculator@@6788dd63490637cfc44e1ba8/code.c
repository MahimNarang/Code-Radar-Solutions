#include<stdio.h>
int main()
{
    int a,b;
    float c;
    char x;
    scanf("%d %d %c", &a, &b, &x);
    if(x =='+'){
        c=a+b;
        printf("%d",c);
    }
    else if(x=='-'){
        c=a-b;
        printf("%d",c);
    }
    else if(x=='*'){
        c=a*b;
        printf("%d",c);
    }
    else{
        c=a/b;
        printf("%d",c);
    }
    return 0;
}