//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
  bool cmp(string &str,int start,int end)

  { if(start>=end)

        {return true;

        }

        

    if(str[start]!=str[end])

        {return false;

        }

        

    return cmp(str,start+1,end-1);

      

  }
    bool isPalin(int N)
    {   string stri = to_string(N);

            return cmp(stri,0,stri.length()-1);

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
	    Solution obj;
	    cout<<obj.isPalin(N)<<endl;
	}
	return 0;
}
// } Driver Code Ends
