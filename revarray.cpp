//Reverse an array using another array-----time O[n]
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
          int n;
          cout<<"Enter size of Array ";
          cin>>n;
          int  *arr=new int[n];
          int *revarr=new int[n];
          cout<<"Enter input in Array";
          for(int i=0;i<n;i++){
                    cin>>arr[i];
          }
          int j=n-1;
         for(int i=0;i<n;i++){
          revarr[i]=arr[j];
          j--;
         }
         cout<<"Initial Array"<<endl;
         for(int i=0;i<n;i++){
                    cout<<arr[i]<<" ";
          }
          cout<<endl;
          cout<<"After reverse"<<endl;
          for(int i=0;i<n;i++){
                   cout<<revarr[i]<<" ";
          }
          delete arr;
          delete revarr;
          return 0;
}
