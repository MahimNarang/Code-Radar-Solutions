// Your code here...
#include<stdio.h>
int main()
{
    int n,max=-1;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(max<arr[i])
        max=arr[i];
    }
    printf("%d",max);
    return 0;
}