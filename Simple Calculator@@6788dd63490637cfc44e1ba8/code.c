#include<stdio.h>
int main()
{
    float a,b;
    char x;
    scanf("%d %d %c", &a, &b, &x);
    if(x =='+'){
        printf("%f",a+b)
    }
    else if(x=='-'){
        printf("%f",a-b);
    }
    else if(x=='*'){
        printf("%f",a*b);
    }
    else{
        printf("%f",a/b);
    }
    return 0;
}