#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int n,n1;
    n1=max(a,b);
    n=max(n1,c);

    if(n*n==(b*b+c*c)||n*n==(b*b+a*a)||n*n==(a*a+c*c)){
        cout<<"pythagoras triplet"<<endl;
    }
    else{
        cout<<"not pythagoras triplet";
    }
    return 0;
}