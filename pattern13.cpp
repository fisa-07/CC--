#include<iostream>
using namespace std;
int main()
{
          int n;
          int star=1;
          cout<<"Enter Row:";
          cin>>n;
          //for upper part
          for(int i=1;i<=n/2;i++){
                    for(int j=1;j<=n/2-i;j++){    //print space in begining
                              cout<<" ";
                    }
                    for(int j=1;j<=star;j++){   //print star
                              cout<<"*";
                    }
                    cout<<endl;
                    star=star+2;
          }
          //for lower part
          star=star-2;
          for(int i=n/2;i>=1;i--){
                    for(int j=1;j<=n/2-i;j++){    //print space in begining
                              cout<<" ";
                    }
                    for(int j=star;j>=1;j--){   //print star
                              cout<<"*";
                    }
                    cout<<endl;
                    star=star-2;
          }
}
