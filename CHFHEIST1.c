#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int D[t],d[t],p[t],q[t],j,i,prod,print=0,m;
    for(i=0;i<t;i++){
        scanf("%d%d%d%d",&D[i],&d[i],&p[i],&q[i]);
    }
    for(i=0;i<t;i++){
        j=0;
        prod=p[i]+j*q[i];
        print=0;
        for(m=1;m<=D[i];m++){
            print=print+prod;
            if(m%d[i]==0){
                j++;
                prod=p[i]+j*q[i];
            }
        }
        printf("%d\n",print);
    }
       
    return 0;
}


