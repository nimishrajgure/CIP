//{ Driver Code Starts
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

        int g=S.size()-1;

        for(int i=g;i>=0;i--){

          if(S[i]=='.'){

              ans+=S.substr(i+1,g-i);

              ans+='.';

              g=i-1;

          }

        }

        ans+=S.substr(0,g+1);

        return ans;

    }  
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends
