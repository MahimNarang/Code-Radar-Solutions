// Your code here...
#include<stdio.h>
int main()
{
    char x;
    int a,b,c;
    scanf("%d %d %c",&a,&b,&x);
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