#include <stdio.h>
int main(){
    int n,q,i,j,sum;
    scanf("%d",&n);
    int cake[n],l[n],r[n],x[n];
    for(i=0;i<n;i++){

    }
    scanf("%d",&q);
    int task[q];
    for(i=0;i<q;i++){
        scanf("%d",&task[i]);
        if(task[i]==1){
            scanf("%d%d%d",&l[i],&r[i],&x[i]);
        }
    }
    for(i=0;i<q;i++){
        if(task[i]==2){
            for(j=0;j<n;j++){
                if(j%2!=0){
                    sum=0;
                    sum=sum+cake[j];
                    printf("%d\n",sum);
                }
            }
        }
        if(task[i]==3){
            for(j=0;j<n;j++){
                sum=0;
                sum=sum+cake[j];
                printf("%d\n",sum);
            }
        }
        if(task[i]==1){
            for(j=l[i];j<=r[i];j++){
                cake[j]=cake[j]+x[i];
            }
        }
    }
    return 0;
}


