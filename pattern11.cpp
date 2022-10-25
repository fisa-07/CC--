#include<iostream>
using namespace std;
int main()
{
          int n;
          cin>>n;
          int space=n-1;
          for(int i=1;i<=n;i++){
                for(int j=1;j<=space;j++) {   //print space in starting NOTE in place of space we use n-1 also
                    cout<<" ";
                }
                for(int j=1;j<=i;j++){ //print star
                    cout<<j<<" ";
                }
                cout<<endl;
                space--;
          }
}
