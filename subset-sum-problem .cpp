//https://www.geeksforgeeks.org/subset-sum-problem-dp-25/
#include<bits/stdc++.h>
using namespace std;

int dp[1000];
int IsSubsetSum(int *arr, int n, int sum)
{
    if(dp[sum]!=-1)
    {
        return dp[sum];
    }
    if(n==0 and sum!=0)
    {
        return 0;
    }
    if(arr[n-1] > sum)
    {
        dp[sum] = IsSubsetSum(arr, n-1, sum);
        return dp[sum];
    }
    dp[sum] = IsSubsetSum(arr, n-1, sum) + IsSubsetSum(arr, n-1, (sum - arr[n-1]));
    return dp[sum];
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    fill(dp, dp+1000, -1);
    dp[0]=1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    cout<<IsSubsetSum(arr, n, sum);
}

/*
7
3 6 4 9 5 9 12
9
*/