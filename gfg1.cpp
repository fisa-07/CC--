// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S)
    {
        // code here
        string ans="";
        stack<string> string_stack;
        string word;
        char point;
        stringstream ss(S);
        while(ss>>word>>point){
            string_stack.push(word);
            cout<<word<<" ";
        }
        cout<<endl;
        while(!string_stack.empty()){
          cout<<string_stack.top()<<" ";
            ans+=string_stack.top();
            string_stack.pop();
        }
        cout<<endl;
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
}  // } Driver Code Ends
