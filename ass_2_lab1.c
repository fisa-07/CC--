//program to find frequency of a given element in array (without sorting)
#include<stdio.h>
int frequencykey(int a[],int key,int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(key==a[i]){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    int count;
    int key;
    printf("Size of array ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter no to search ");
    scanf("%d",&key);
    count=frequencykey(arr,key,n);
    printf("freqency %d",count);
    return 0;
}