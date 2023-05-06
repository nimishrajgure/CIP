//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long x=0;
    void ans(int n,int a,int b,int c){
        if(n==1){
            x+=1;
            cout<<"move disk "<<n<<" from rod "<<a<<" to rod "<<b<<endl;
            return;
        }
        ans(n-1,a,c,b);
        x+=1;
        cout<<"move disk "<<n<<" from rod "<<a<<" to rod "<<b<<endl;
        ans(n-1,c,b,a);
    }
    long long toh(int N, int from, int to, int aux) {
        // Your code here
        ans(N,from,to,aux);
        return x;
    }

};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}


//Position this line where user code will be pasted.
// } Driver Code Ends
