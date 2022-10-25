// pascals triangle
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
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){   // row 
        for(int j=0;j<=i;j++){  // column
            cout<<fact(i)/(fact(i-j)*fact(j))<<" ";   // coffecients 
        }
        cout<<endl;
    }
    return 0;
}