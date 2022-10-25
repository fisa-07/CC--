//program to find whether an element (input at runtime) exists or not in array
#include<stdio.h>
int searchkey(int a[],int key,int n){
    for(int i=0;i<n;i++){
        if(key==a[i]){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    int index;
    int key;
    int arr[100];
    printf("Size of array ");
    scanf("%d",&n);
    printf("Enter elements ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter no to search ");
    scanf("%d",&key);
    index=searchkey(arr,key,n);
    printf("Index %d",index);
    return 0;
}
    