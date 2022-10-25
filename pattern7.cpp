// butterfly pattern
#include<iostream>
using namespace std;
int main()
{
          int n;
          cout<<"Enter size of Butterfly:";
          cin>>n;
          //code for upper part of butterfly
          for(int i=1;i<=n;i++){   //no of row
                   for(int j=1;j<=i;j++){   //print star in  starting of each row where no of star is equal to no of rowth
                    cout<<"* ";
                   }
                   int space=2*n-2*i;   //no of space
                   for(int j=1;j<=space;j++){    //print space in each row
                    cout<<"  ";
                   }
                   for(int j=1;j<=i;j++){   //print star in  end of each row where no of star is equal to no of rowth
                    cout<<" *";
                   }
                   cout<<endl;
          }
          // code for lower part
          for(int i=n;i>=1;i--){   //no of row
                   for(int j=1;j<=i;j++){   //print star in begining
                    cout<<"* ";
                   }
                   int space=2*n-2*i;   //no of space
                   for(int j=1;j<=space;j++){    //print space in each row
                    cout<<"  ";
                   }
                   for(int j=1;j<=i;j++){   //print star at end
                    cout<<" *";
                   }
                   cout<<endl;
          }
}
