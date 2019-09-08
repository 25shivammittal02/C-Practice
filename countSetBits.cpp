//count set bits-> __builtin_popcount(n);
#include <bits/stdc++.h>
using namespace std;

int setbits(int n)
{
    if(n==0)
    {
        return 0;
    }
    return 1+ setbits(n & (n-1));
}

int main() 
{
    int n;
    cin>>n;
    cout<<setbits(n)<<endl;
}

/*
sample input

*/