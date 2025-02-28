#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n+1;i++){
        for(j=n;j>=i;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
