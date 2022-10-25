// floyd"s triangle
#include<iostream>
using namespace std;
int main()
{
          int n,f=1;
          cout<<"Enter Range:";
          cin>>n;
          for(int i=1;i<=n;i++){
                    for(int j=1;j<=i;j++){
                              if(j<=i){
                                        cout<<f<<" ";
                                        f=f+1;
                              }

                    }
                    cout<<endl;
          }
}

