// hexa to decimal
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,power=0;
    cin>>n;
    int rem,dec=0;
    while(n>0){
        rem=n%10;
        dec+=rem*(pow(16,power));
        n=n/10;
        power++;
    }
    cout<<dec;

    return 0;
}