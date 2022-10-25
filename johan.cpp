#include<iostream>
using namespace std;
int main(){
		int n,x;
        int c=0;
        cin>>n;
        cin>>x;
		int p[n];
		int s[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i];
			if(p[i]!= -1)
				s[p[i]]++;
		}
		for(int i=0;i<n;i++)
		{
			if(s[i]>=x)
				c++;
		}
		
		cout<<c;
        return 0;
	}
