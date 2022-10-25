#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    unsigned first = str.find('1=');
    unsigned last = str.find_last_not_of('+');
    string strNew = str.substr (first,last-first);
    cout << strNew << endl;
    return 0;
}