#include<stdio.h>
int main()
{
    int a,b;
    float c;
    char x;
    scanf("%d %d %c", &a, &b, &x);
    if(x =='+'){
        c=a+b;
        printf("%f",c);
    }
    else if(x=='-'){
        c=a-b;
        printf("%f",c);
    }
    else if(x=='*'){
        c=a*b;
        printf("%f",c);
    }
    else{
        c=a/b;
        printf("%f",c);
    }
    return 0;
}