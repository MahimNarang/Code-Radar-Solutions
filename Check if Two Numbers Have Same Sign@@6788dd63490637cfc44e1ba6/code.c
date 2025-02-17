#include<stdio.h>
int main()
{
    int x,y;
    if(x>=0&&y>=0||x<=0&&x<=0){
        printf("Same Sign");
    }
    else if(x>=0&&y<0||x<0&&y>=0){
        printf("Different Sign");
    }
    return 0;
}