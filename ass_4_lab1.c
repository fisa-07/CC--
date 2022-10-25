//program to find smallest and 2nd smallest element in array
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int main(){
    int n,i;
    int min1=INT_MAX;
    int min2=INT_MAX;
    printf("Size of array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    i=0;
    for(i=0;i<n;i++){
        if(arr[i]<min1){
            min1=arr[i];
        }
    }
    i=0;
    for(i=0;i<n;i++){
        if(arr[i]<min2 && arr[i]>min1){
            min2=arr[i];
        }
    }
    printf("Min1 is %d and Min2 is %d",min1,min2);
    return 0;
}
