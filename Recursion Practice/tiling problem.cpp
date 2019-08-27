//https://www.geeksforgeeks.org/tiling-problem/
#include<bits/stdc++.h>
using namespace std;

int dp[1000];

int TilingProblem(int n)
{
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    dp[n] = TilingProblem(n-1) + TilingProblem(n-4);
    return dp[n];
}

int main()
{
    int n;
    cin>>n;
    dp[0]=1;
    dp[1]=1;
    dp[2]=1;
    dp[3]=1;
    dp[4]=2;
    for(int i=5;i<1000;i++)
    {
        dp[i]=-1;
    }
    cout<<TilingProblem(n);
}

/*
Sample Input
6

*/