//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

void square(int n){
    // code here
    for(int i =0; i<n; i++)
	{
		for(int j=0;j<n;j++)
		{	
			//print * if the value of 
			//outer or inner loop value is 0 or n-1
			if(i==0||i==n-1||j==0||j==n-1)
			{
				cout<<"*"<<" ";
			}
			else
			//else print empty spaces
			{
				cout<<" "<<" ";
			}
		}
		printf("\n");
	}
}


//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        square(n);
    }
    return 0;
}
// } Driver Code Ends
