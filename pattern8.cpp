// inverted triangle pattern with no
#include<iostream>
using namespace std;
int main()
{
          int n;
          cin>>n;
          for(int i=n;i>=1;i--){     //NOTE when we have to print inverted right triangle and spaces are in right side then always start i with n and then decrement it
                    for(int j=1;j<=i;j++){   //you can use j=n+i-1 also
                            cout<<j<<" ";
                    }
                    cout<<endl;
          }
}
