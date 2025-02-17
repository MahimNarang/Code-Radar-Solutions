#include<stdio.h>
int main()
{
    float a,b;
    char x;
    scanf("%f%f", &a, &b);
    scanf("%c",&x);
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