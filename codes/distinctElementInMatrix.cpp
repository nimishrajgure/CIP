//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int distinct(vector<vector<int>> M, int N)
    {
        // code here

        int count=0;

        

        vector<set<int>> v;

        for(int i=0;i<N;i++){

            set<int>s;

            for(int j=0;j<M[0].size();j++){

                

                int k=M[i][j];

 

                s.insert(k);

            }

            v.push_back(s);

        }

        

        unordered_map<int,int> mp;

        for(int i=0;i<v.size();i++){

            for (auto it = v[i].begin(); it!=v[i].end();it++)

            {

                mp[(*it)]++;

            }

        }

        for(auto &value:mp){

            if(value.second==v.size()){

                count++;

            }

        }

        return count;

    }
    
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> M(N, vector<int>(N, 0));
        for(int i = 0;i < N*N; i++)
            cin>>M[i/N][i%N];
        
        Solution ob;
        cout<<ob.distinct(M, N)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
