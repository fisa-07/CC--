//program to find largest and 2nd largest element in array
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int main(){
    int n;
    int max1=INT_MIN;
    int max2=INT_MIN;
    printf("Size of array ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max1=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max2 && arr[i]<max1){
            max2=arr[i];
        }
    }
    printf("Max1 is %d and Max2 is %d",max1,max2);
    return 0;
}
