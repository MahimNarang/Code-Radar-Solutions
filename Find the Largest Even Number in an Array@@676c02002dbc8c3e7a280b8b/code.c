// Your code here...
#include<stdio.h>
int main()
{
    int n,max=-1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(max<arr[i] && arr[i]%2==0)
        max=arr[i];
    }
    printf("%d",max);
    return 0;
}