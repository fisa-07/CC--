#include<iostream>
using namespace std;
int main(){
    long long int t,D,d,p,q,print=0,j,i,prod;
    cin>>t;
    while(t--){
        cin>>D>>d>>p>>q;
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
        cout<<print<<"\n";
    }
    return 0;
}

