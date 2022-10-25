#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

	// Add your code here
    Difference(vector<int> a){
        for(int i=0;i<a.size()-1;i++){
            elements.push_back(a[i]);
        }
    }
    void computeDifference(){
        sort(elements.begin(),elements.end());
        for(int i=0;i<elements.size()-1;i++){
            cout<<elements[i]<<" ";
        }
        maximumDifference = elements.end()-elements.begin();
    }

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;

    
    return 0;
}