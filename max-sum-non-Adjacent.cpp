//https://www.geeksforgeeks.org/maximum-sum-such-that-no-two-elements-are-adjacent-set-2/
#include <bits/stdc++.h> 
using namespace std;  

int dp[1000];

int Maxsum(int *arr, int n, int pos)
{
    if(dp[pos]!=-1)
    {
        return dp[pos];
    }
    int opt1 = arr[pos] + Maxsum(arr,n,pos+2);
    int opt2 = Maxsum(arr,n,pos+1);
    dp[pos] =  max(opt1, opt2);
    return dp[pos];
}

int main() 
{ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        dp[i]=-1;
    }
    dp[n-1] = arr[n-1];
    dp[n-2] = max(arr[n-2], arr[n-1]);
    cout<<Maxsum(arr,n,0);
    return 0;
}

/*
6
5 5 10 100 10 5

*/