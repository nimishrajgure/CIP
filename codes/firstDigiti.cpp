#include<iostream>
using namespace std;

int firstDigit(int n)
{
    while(n>10)
    {
        n/=10;
    }
    return n;
}

int main()
{
    int n;
    cin>>n;
    cout<< "First Digit is: " << firstDigit(n);
    return 0;
}
