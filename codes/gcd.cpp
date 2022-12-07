//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int gcd(int a, int b){

        
    //code here to calculate and return gcd of a and b
    int ans=1;
    int x=min(a,b);
    for(int i=1;i<=x;i++)
    {
        if(a%i==0 and b%i==0)
        ans=i;
    }
   
    return ans;
    

        
}

//{ Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int A, B; cin>>A>>B;
        int ans = gcd(A,B);
        cout<<ans<<endl;
	}
}
// } Driver Code Ends
