#include<bits/stdc++.h>
using namespace std;
bool checkprime(int n) {
  bool isprime = true;
  if (n == 0 || n == 1) {
    isprime = false;
  }
  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      isprime = false;
      break;
    }
  }
  return isprime;
}
int prime(int n)
{
    int p=-1;
    for(int i=2;i<n;i++){
        if(checkprime(i)){
            if(n%i==0){
                p=i;
            }
        }
    }
    return p;
}
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n!=0){
        if(prime(n)!=-1){
            n = prime(n);
            count++;
        }
        else{
            n=n-1;
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}