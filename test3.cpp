#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t){
		bool ans=1;
	    int l;
	    cin>>l;
	    int a[l];
	    for(int i=0;i<l;i++){
	        cin>>a[i];
	    }
	    if((l-1)<=2)
	    {
	        cout<<"NO\n";
	        ans=0;
	        //break;
	    }
	    int i=2;
	    while(i<l-1){
	        if(a[i-1]==a[i+1]){
	            if(a[i+1]!=a[0]){
	                swap(a[0],a[i+1]);
	            }
	            else if(a[i+1]!=a[l-1]){
	                swap(a[i+1],a[l-1]);
	            }
	            else{
	                cout<<"NO\n";
	                ans=0;
	                //break;
	            }
	        }
	        i++;
	    }
	    if(ans)
	    cout<<"YES\n";
	    t--;
	}
	return 0;
}
