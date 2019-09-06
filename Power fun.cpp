#include<bits/stdc++.h>
using namespace std;

int power(int n, int m)
{
    if(m==0)
    {
        return 1;
    }
    return n*power(n,m-1);
}

int fast(int n, int m)
{
    if(m==0)
    {
        return 1;
    }
    int temp = fast(n,m/2);
    temp *= temp;
    if(m&1)
    {
        return n*temp;
    }
    return temp;
}

int main()
{
    int n,m;
    cin>>n>>m;
    cout<<fast(n,m);
}
/*
Sample Input
6

*/