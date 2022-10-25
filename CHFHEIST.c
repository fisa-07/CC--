#include <stdio.h>
int main(){
    long long int t,D,d,p,q,print=0,j,i,prod;
    scanf("%ld",&t);
    while(t--){
        scanf("%ld%ld%ld%ld",&D,&d,&p,&q);
        j=0;
        prod=p+j*q;
        print=0;
        for(i=1;i<=D;i++){
            print=print+prod;
            if(i%d==0){
                j++;
                prod=p+j*q;
            }
        }
        printf("%ld\n",print);
    }
    return 0;
}

