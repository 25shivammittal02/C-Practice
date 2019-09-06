#include<bits/stdc++.h>
using namespace std;

int dp[1000];

int fibnoacci(int n)
{
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    dp[n] = fibnoacci(n-1) + fibnoacci(n-2);
    return dp[n];
}

int main()
{
    int n;
    cin>>n;
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<1000;i++)
    {
        dp[i]=-1;
    }
    cout<<fibnoacci(n);
}
/*
Sample Input
6

*/