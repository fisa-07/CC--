// facorial
#include<bits/stdc++.h>
using namespace std;
long fact(int n){
    long fact=1;
    for(int i=n;i>0;i--){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n;
    cin>>n;
    cout<<"factorial = "<<fact(n);
    return 0;
}