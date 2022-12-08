#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<bool>v;
    while(n > 0)
    {
        int t = n % 2;
        v.push_back(t);
        n /= 2;
    }
    for(int i = v.size() - 1; i >= 0; i--)
        cout << v[i];
    return 0;
}
