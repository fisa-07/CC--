#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n,q;
   cin>>n>>q;
   int *indexarr[n];
   for(int i=0;i<n;i++){
       int k;
       cin>>k;
       int vla[k];
       for(int j=0;j<k;j++){
           cin>>vla[j];
       }
       indexarr[i]=vla;
   }
   while(q--){
       int i,j;
       cin>>i>>j;
       int ans=(*indexarr[i])+(j*2);
       cout<<ans<<endl;
   }

    return 0;
}

