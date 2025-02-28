// Your code here...
#include<stdio.h>
int main()
{
    int r,c,n;
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        for(j=r;j<=n;j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}