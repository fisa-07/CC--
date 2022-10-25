//Reverse an array-----time O[n]
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
          int n;
          cout<<"Enter size of Array  ";
          cin>>n;
          int  *arr=new int[n];
          cout<<"Enter input in Array  ";
          for(int i=0;i<n;i++){
                    cin>>arr[i];
          }
          for(int i=0;i<n;i++){
                              if(i>=n-1-i){      //condition for terminating the loop
                                        break;
                              }
                    swap(arr[i],arr[n-1-i]);
          }
          cout<<"After reverse "<<endl;
          for(int i=0;i<n;i++){
                    cout<<arr[i]<<" ";
          }
          delete arr;
          return 0;
}

