#include<stdio.h>
int main()
{
    int a;
    printf("Enter age");
    scanf("%d",&a);
    if(a>18){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}