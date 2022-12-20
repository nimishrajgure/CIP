//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct area {
    int sd;
    int len, wid;
};


// } Driver Code Ends
// User function Template for C++

/*struct area
{
    int sd;
    int len, wid;
}*/
void find_area(int side, int le, int wd) {
   area aa;
   aa.sd=side;
   // assign value to side of square
   // your code here

   // assign values to length and breadth of rectangle
   // your code here
   aa.len=le;
   aa.wid=wd;

   // computing area of square
   // your code here
   cout<<aa.sd*aa.sd<<" ";

   // computing area of rectangle
   // your code here
   cout<<aa.len*aa.wid;
}



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {
        int side, length, wide;
        cin >> side >> length >> wide;

        find_area(side, length, wide);
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
