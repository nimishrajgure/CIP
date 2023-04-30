//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int minimum_vertical_sum(vector<vector<int>>v)
{
    //Your code here
   /* int n,m;
    vector<int>mini;
    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            mini.push_back(mini[j]);                              *my approarch*
                                                                    but wrong
        }    
    }
    //cout<<min_element(mini.begin(), mini.end());
   // return *std::min_element(mini.begin(), mini.end());
   sort(mini.begin(), mini.end());
   return mini[0];*/
   
   //Your code here
   vector<int> ans;
   ans = v[0];
   for(int i=0; i<v.size(); i++){
       
       for(int j=0; j<v[i].size(); j++){
           if(v[i].size() > ans.size() && ans[j] == *ans.end())
           ans.push_back(v[i][j]);
           else
           ans[j] += v[i][j];
           
       }
   }
   sort(ans.begin(), ans.end());
   return ans[0];
    
    

}

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<vector<int>>v;
	    for(int i=0;i<n;i++)
	    {
	        int m;
	        cin>>m;
	        vector<int>temp;
	        for(int j=0;j<m;j++)
	        {
	            int k;
	            cin>>k;
	            temp.push_back(k);
	        }
	        v.push_back(temp);
	    }
	    int min_sum=minimum_vertical_sum(v);
	    cout<<min_sum<<endl;
	}
	return 0;
}

// } Driver Code Ends
