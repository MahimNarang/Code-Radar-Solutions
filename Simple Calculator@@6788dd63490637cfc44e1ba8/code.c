// Your code here...
#include<stdio.h>
int main()
{
    char x;
    int a,b;
    scanf("%c",&x);
    if(x=='+'){
        printf(a+b);
    }
    else if(x=='-'){
        printf(a-b);
    }
   else if(x=='*'){
        printf(a*b);
    }
    else{
        printf(a/b);
    }
    return 0;
}