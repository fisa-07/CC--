// simple rectangle pattern
#include<iostream>
using namespace std;
int main()
{
          int c,r;
          cout<<"Enter no of column and row:";
          cin>>c>>r;
          for(int i=1;i<=c;i++){
                    for(int j=1;j<=r;j++){
                              cout<<"*";
                    }
                    cout<<endl;
          }
          return 0;
}
