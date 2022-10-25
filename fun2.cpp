// fibonaci series
#include<bits/stdc++.h>
using namespace std;
void fibo(int lenght){
    int n1=0,n2=1,next;
    for(int i=1;i<=lenght;i++){
        cout<<n1<<endl;
        next=n1+n2;
        n1=n2;
        n2=next;
    }
    return;
}
int main(){
    int n;
    cin>>n;
    fibo(n);
    return 0;
}