// binary to decimal   
#include<bits/stdc++.h>
using namespace std;
int binary(int n){
    int ans = 0;
    int x = 1;
    while(n){
        int rem=n%10;    // for getting lst digit
        ans+=rem*x;   
        x*=2;  // base is 2 in binary
        n=n/10;
    }
    return ans;
}
// octa to decimal
int octadecimal(int n){
    int ans = 0;
    int x = 1;
    while(n){
        int rem=n%10;    // for getting lst digit
        ans+=rem*x;   
        x*=8;  // base is 8 in oct
        n=n/10;
    }
    return ans;
}
// hexa to decimal
int hexadecimal(string str){
    int ans=0;
    int x=1;
    int s = str.size();  // give size of str
    for(int i=s-1;i>=0;i--){
        if(str[i]>='0'&&str[i]<='9'){
            ans+=x*(str[i]-'0');   // this gives like if '2'-'0'(char)= 2(int)
        }
        else if(str[i]>='A'&&str[i]<='F'){
            ans+=x*(str[i]-'A'+10); // this gives like 'A'-'A'= 0 , 'B'-'A'= 1 , 'C'-'A'=2
        }
        x*=16; // base is 16 in hexa 
    }
    return ans;

}
int main(){
    string str;
    int n;
    cout<<"input for binary and octa  :  ";
    cin>>n;
    cout<<"binary to decimal  :  ";
    cout<<binary(n)<<endl;
    cout<<"octa to decimal  :  ";
    cout<<octadecimal(n)<<endl;
    cout<<"input for hexa  :  ";
    cin>>str;
    cout<<hexadecimal(str)<<endl;
    return 0;
}