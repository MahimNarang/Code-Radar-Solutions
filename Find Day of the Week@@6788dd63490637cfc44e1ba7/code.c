#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
    if(a==1){
        printf("Monday");
    }
    if(a==2){
        printf("Tuesday");
    }
    if(a==3){
        printf("Wednesday");
    }
    if(a==4){
        printf("Thursday");
    }
    if(a==5){
        printf("Friday");
    }
    if(a==6){
        printf("Saturday");
    }
    if(a==7){
        printf("Sunday");
    }
    else{
        printf("Invalid")
    }
    return 0;
}