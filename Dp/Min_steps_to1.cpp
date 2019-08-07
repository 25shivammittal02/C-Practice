//MIn steps to 1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Top Down
int MinStepTo1(int n, int *dp)
{
    int q1=INT_MAX, q2=INT_MAX, q3=INT_MAX;
    if(n==1)
    {
        return 0;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    if(n%3==0)
    {
        q3 = MinStepTo1(n/3, dp) +1;
    }
    if(n%2==0)
    {
        q2 = MinStepTo1(n/2, dp) +1;
    }
    q1 = MinStepTo1(n-1, dp) +1;

    int sol = min(q1, min(q2,q3));
    dp[n] = sol;
    return sol;

}

//Bottom Up
void MinTo1(int n, int *dp)
{
    dp[0] = 0;
    dp[1] = 0;
    for(int i=2;i<=n;i++)
    {
        int q1=INT_MAX, q2=INT_MAX, q3=INT_MAX;
        if(i%3==0)
        {
            q1 = dp[i/3] +1;
        }
        if(i%2==0)
        {
            q2 = dp[i/2] +1;
        }
        q3 = dp[i-1] +1;

        dp[i] = min(q1, min(q2,q3));
        cout<<"dp["<<i<<"] = "<<dp[i]<<endl;
    }
    return;
}

int main()
{
    int n;
    cin>>n;
    int dp[n]={};
    // for(int i=0;i<=n;i++)
    // {
    //     dp[i] = -1;
    // }
    fill(dp, dp+n+1, -1); //to initialize the array
    cout<<"Min steps Top Down = "<<MinStepTo1(n, dp)<<endl;
    MinTo1(n, dp);
    cout<<"Min steps Bottom Up = "<<dp[n];
    
}


/*
Sample test case
45
*/