#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int> m;
    int n;
    int x;
    cin>>n;
    cin>>x;
    int f[n];
    for(int i=0;i<n;i++){
        cin>>f[i];
    }
    if(x>0){
        for(int i=0;i<n;i++){
            if(f[i]!=-1)
                m[f[i]]++;
        }
        int c=0;
        for(auto it:m){
            if(it.second>=x){
                c++;
            }
        }
        cout<<c;
    }
    else{
        cout<<n;
    }
    return 0;
}