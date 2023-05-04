//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        int GCD(int a,int b)
    {
        //Your code here
        
        if(a>b)

        {

            swap(a,b);

        }

        if(b%a==0)

        {

            return a;

        }

        return GCD(b-a,a);

        //Your code here

    
    }
};

//{ Driver Code Starts.
int main() {
	int T;
	cin>>T;
	while(T--) 
	{
	    int a,b;
	    cin>>a>>b;
	    Solution ob;
	    cout<<ob.GCD(a,b)<<endl;
	}
	return 0;
}
// } Driver Code Ends
