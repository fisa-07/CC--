#include<stdio.h>
void bubble(int n,int list[]){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(list[j]>list[j+1]){
                temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d\t",list[i]);
    }
}
int main(){
    int list[100];
    int n,i;
    printf("Enter Range:\n");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&list[i]);
    }
    printf("Shorted array\n");
    bubble(n,list);
    return 0;
}