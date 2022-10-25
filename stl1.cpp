#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> st;
    st = {5,3,6,3,8,1,8,1,9,4,0,2,1,6,4,2,7,9};
    for (auto it:st){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<st.size()<<endl;
    auto it = st.find(7);
    cout<<*it;

}