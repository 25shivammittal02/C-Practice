#include<bits/stdc++.h>
using namespace std;

int mul(int n, int m)
{
    if(m==0)
    {
        return 0;
    }
    return n + mul(n, m-1);
}

int main()
{
    int n,m;
    cin>>n>>m;
    cout<<mul(n,m);
}
/*
Sample Input
6

*/