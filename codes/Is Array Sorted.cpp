//{ Driver Code Starts
//Initial Template for C++


#include<iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    //Complete this function
    int isSorted(int arr[],int n)
    {
      
      //Your code here
      int inc = 0;
      int dec = 0;
      for(int i=0; i<n-1; i++) {
          if(arr[i] < arr[i+1])
              inc++;
          else if(arr[i] > arr[i+1])
              dec++;
      }
      if(inc==0 || dec==0)
          return 1;
      return 0; 
    }
};

//{ Driver Code Starts.


int main() {
	int T;
	cin>>T;
	while(T--) 
	{
	    int N;
	    cin>>N;
	    int arr[N];
	    for(int i=0;i<N;i++)
	    cin>>arr[i];
	    Solution obj;
	    cout<<obj.isSorted(arr,N);
	    cout<<endl;
	}
	return 0;
}
// } Driver Code Ends
