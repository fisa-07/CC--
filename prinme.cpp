#include<iostream>
using namespace std;
int main()
{
          int n,c=0;
          cin>>n;
          for(int i=2;i<=n-1;i++){
                 if(n%i==0)
                    c++;
          }
          if(c==1){
                    cout<<"NUMBER IS NOT PRIME";
          }
          else{
                    cout<<"NUMBER IS PRIME";
          }
          return 0;
}
