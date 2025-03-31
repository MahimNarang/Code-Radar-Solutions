// Your code here...
#include<stdio.h>
int main()
{
    int n,max=-1000;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(max<=arr[i])
        max=arr[i];
    }
    printf("%d",max);
    return 0;
}