#include<bits/stdc++.h>
using namespace std;
int main(){
    int l;
    cin>>l;
    int sl[l][2];
    for(int i=0;i<l;i++){
        for(int j=0;j<2;j++){
            cin>>sl[i][j];
        }
    }
    int cr=0;
    int lr=0;
    int ll;
    for(int i=0;i<l;i++){
        lr+=sl[i][1]-sl[i][0];
    }
    for(int i=0;i<l-1;i++){
        if(sl[i][1]>sl[i+1][0])
            cr+=sl[i][1]-sl[i+1][0];
    }
    cout<<lr-cr;
    return 0;
}