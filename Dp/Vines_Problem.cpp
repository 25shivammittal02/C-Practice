//vines Problem
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int dp[100][100];

int vines(int *arr, int s, int e, int y)
{
    if(s>e)
    {
        return 0;
    }
    int q1 = arr[s]*y + vines(arr, s+1, e, y+1);
    int q2 = arr[e]*y + vines(arr, s, e-1, y+1);
    return max(q1, q2);
}

int vinesTopDown(int *arr, int s, int e, int y)
{
    if(s>e)
    {
        return 0;
    }
    if(dp[s][e] != -1)
    {
        return dp[s][e];
    }
    int q1 = INT_MIN, q2 = INT_MIN;
    q1 = arr[s]*y + vinesTopDown(arr, s+1, e, y+1);
    q2 = arr[e]*y + vinesTopDown(arr, s, e-1, y+1);
    dp[s][e] = max(q1, q2);
    return dp[s][e];
}

int vinesBottomUp(int *arr, int size)
{
    int s= 0;
    int e= size-1;
    for(int k=0;k<size;k++)
    {
        int i=0;
        int j=k;
        int y = size - (j-i);
        while(j<size)
        {
            int first = arr[i]*y + dp[i+1][j];
            int second = arr[j]*y + dp[i][j-1];
            dp[i][j] = max(first, second);
            i++;
            j++;
        }
    }
    return dp[0][size-1];
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
    cout<<"Normal recursion -> Max Profit = "<<vines(arr, 0, n-1, 1)<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            dp[i][j] =-1;
        }   
    }
    cout<<"TOP DOWN DP -> Max Profit = "<<vinesTopDown(arr, 0, n-1, 1)<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            dp[i][j] =0;
        }   
    }
    cout<<"BOTTOM UP DP -> Max Profit = "<<vinesBottomUp(arr, n)<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
}



/*
Sample test case
5
2 3 5 1 4
*/