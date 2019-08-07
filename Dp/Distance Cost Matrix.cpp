//Distance and cost matrix
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int dp[100][100];
int n;
int arr[100][100];
void leastCost()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0)
            {
                dp[i][j] = arr[i][j] + dp[i][j-1];
            }
            else if(j==0)
            {
                dp[i][j] = arr[i][j] + dp[i-1][j];
            }
            else
            {
                dp[i][j] = arr[i][j] + min(dp[i-1][j] , dp[i][j-1]);
            }
        }   
    }
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }   
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            dp[i][j] =0;
        }   
    }
    leastCost();
    cout<<"The Distance Cost Matrix ="<<endl;
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
3
1 2 3
4 8 2
1 5 3
*/