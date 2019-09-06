//https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps/0
#include <bits/stdc++.h>
using namespace std;
int minimumjumps(vector<int> jumps)
{
    
    int n= jumps.size();
    if(n==0)
    {
        return -1;
    }
    int dp[n];
    dp[0]=0;
    for(int i=1;i<n;i++)
    {
        dp[i]=INT_MAX;
        for(int j=0; j<i; j++)
        {
            if(i<=j+jumps[j])
            {
                dp[i] = min(dp[i],dp[j]+1);
            }
           
        }
        if(dp[i]==INT_MAX)
        {
            return -1;
        }
    }
    return dp[n-1];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> v;
		for(int i=0;i<n;i++)
		{
			int d;
            cin>>d;
            v.push_back(d);
		}
		int ans=minimumjumps(v);
		cout<<ans<<endl;
	}
}

/*
2
11
1 3 5 8 9 2 6 7 6 8 9
6
1 4 3 2 6 7

*/