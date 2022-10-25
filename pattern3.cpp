//inverted triangle pattern
#include<iostream>
using namespace std;
int main()
{
          int n;
          cout<<"Enter Row:";
          cin>>n;
          for(int i=1;i<=n;i++){
                    for(int j=1;j<=n-i+1;j++){  //here n-i+1 reduce one star from each row increment
                              cout<<"*";
                    }
                    cout<<endl;
          }
          return 0;

}
