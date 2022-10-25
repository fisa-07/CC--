#include<iostream>
using namespace std;
int main()
{

          int n,i;
          cout<<"Enter array size:";
          cin>>n;
          int arr[n];
          cout<<"Enter Elements:";
          for(i=0;i<n;i++){
                    cin>>arr[i];
          }
          cout<<"After reverse array is:\n";
          while((n)--){
                    cout<<arr[n]<<"\t";
          }
          return 0;
}
