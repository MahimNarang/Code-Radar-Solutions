// Your code here...
#include<stdio.h>
int main()
{
    int r,c,n;
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        for(c=r;c>0;c--){
        printf("* ");
    }
        printf("\n");
        }
    return 0;
}