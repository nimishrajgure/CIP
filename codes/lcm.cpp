//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int LCM(int a, int b){

    //write your code here
    //return LCM of a and b
    int start = max(a,b);
    int end = a*b;
    int ans = start;
    
    for(int i = start; i <= end; i++)
    {
        if(i%a==0 and i%b==0) 
        {
            ans = i;
            break;
        }
    }
    
    
    return ans;
    
}

//{ Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int a, b; cin>>a>>b;
        cout<<LCM(a, b)<<endl;
	}
}
// } Driver Code Ends
