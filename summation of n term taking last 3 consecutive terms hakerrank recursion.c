#include<stdio.h>
int main()
{
    int n,i,sum=0,arr[50];
    scanf("%d",&n);
    scanf("%d%d%d",&arr[1],&arr[2],&arr[3]);
    for(i=1;i<=n-3;i++)
    {
        arr[3+i]=arr[i]+arr[i+1]+arr[i+2];
    }
    printf("%d",arr[3+i-1]);
    return 0;
}
