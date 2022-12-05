#include<iostream>
#include<cmath>
using namespace std;
int getMax(int , int );

int main()
{   
    int a = 10, b = 20;
    cout << getMax(a,b) << endl;
    
    // Using Library functions
    {
        double a = 2, b = 4;
        cout << pow(a,b) << endl;
        double x = 100;
        cout << log10(x);
    }
    return 0;
}

int getMax(int x, int y)
{
    if(x>y)
        return x;
    else 
        return y;
}