#include<stdio.h>
int main(){
    int rem[50],count=0,m;
    int n,i=0;
    scanf("%d",&n);
    for(n=n;n>0;n=n/2){
        rem[i]=n%2;
        i++;
    }
    m=i;
    for(i=0;i<m;i++){
        if(rem[i]==1&&rem[i++]==1){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
