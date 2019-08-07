//Length of rod
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int dp[100];

int MaxProfit(int *arr, int l)
{
    int maxx =0;
    if(l==0)
    {
        return 0;
    }
    if(dp[l]!=-1)
    {
        return dp[l];
    }
    for(int i=1;i<=l;i++)
    {
        maxx = max(maxx, arr[i]+MaxProfit(arr,l-i));
        dp[l] = maxx;
    }
    return maxx;
}

void MaxProfitBottomUp(int *arr, int l)
{
    for(int i=1;i<=l;i++)
    {
        int best =0;
        for(int j=1;j<=i;j++)
        {
            best = max(best ,arr[j] + dp[i-j]);
        }
        dp[i]=best;
        cout<<"dp["<<i<<"] = "<<dp[i]<<endl;
    }
}

int main()
{
    int l;
    cin>>l;
    int arr[l+1];
    for(int i=1;i<=l;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<l+1;i++)
    {
        dp[i] =-1;
    }
    cout<<"Max Profit Top Down = "<<MaxProfit(arr,l)<<endl;
    for(int i=0;i<l+1;i++)
    {
        dp[i] =0;
    }
    cout<<"Max Profit Botton UP ->"<<endl;
    MaxProfitBottomUp(arr,l);
}

/*
Sample test case
4
2 3 2 5
*/