// triangle pattern
#include<iostream>
using namespace std;
int main()
{
          int n;
          cout<<"Enter Row:";
          cin>>n;
          for(int i=1;i<=n;i++){
                    for(int j=1;j<=n;j++){
                              if(j<=n-i){    //print space
                                        cout<<" ";
                              }
                              else{
                                        cout<<"*";
                              }
                    }
                    cout<<endl;
          }
          return 0;

}
