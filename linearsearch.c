#include<stdio.h>
int linerasearch(int arr[],int key,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;   
        }
       
    }
    return -1;   

}
int main(){
    int n,arr[100];
    printf("Enter Size: ");
    scanf("%d",&n);
    printf("Enter Elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Key to Search: ");
    scanf("%d",&key);
    printf("%d",linerasearch(arr,key,n));
    return 0;
}