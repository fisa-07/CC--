// combinators
#include<bits/stdc++.h>
using namespace std;
long fact(int n){
    long fac=1;
    for(int i=1;i<=n;i++){
       fac=fac*i;
}
return fac;
}

int main(){
    int n,r;
    cin>>n>>r;
    cout<<fact(n)/(fact(n-r)*fact(r));
    return 0;
}