//Print nth Fibonacchi Number using dp
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Top down
int fib(int n, int *dp)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }

    int sol = fib(n-1 , dp) + fib(n-2, dp);
    dp[n] = sol;
    return sol;
}

void fibBottomUp(int *dp, int n)
{
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
        cout<<"dp["<<i<<"] = "<<dp[i]<<endl;
    }
    return;
}


int main()
{
    int n;
    cin>>n;
    int dp[n] = {};
    fibBottomUp(dp, n);
    cout<<"Top DOWN=> ";
    int ans = fib(n, dp);
    cout<<ans;
}


/*
Sample test case
45
*/