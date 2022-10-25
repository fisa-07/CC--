#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    bool flag=0;
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"NUMBER IS NOT PRIME"<<endl;
            break;
            flag=1;
        }
    }
    if(flag==0){
        cout<<"NUMBER IS PRIME"<<endl;
    }
    return 0;
}