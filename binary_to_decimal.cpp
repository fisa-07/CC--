#include<iostream>
using namespace std;
int main()
{
          int n;
          cout<<"Enter Decimal: ";
          cin>>n;
          int b[10];
          int i=0;
          while(n!=0){
                    b[i]=n%2;    //store remainder in array
                    n=n/2;
                    i++;
          }
          for(int j=i-1;j>=0;j--){     // here j=i-1 kyonki while loop me jab last ber enter karenge tab v i incriment kar jaye ga
                    cout<<b[j]<<" ";
          }
          return 0;

}
