//https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number/0
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int l = INT_MAX;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>0 && arr[i]<l)
	        {
	            l=arr[i];
	        }
	    }
	    if(l!=1)
	    {
	        cout<<"1"<<endl;
	    }
	    else
	    {
	        int cnt[n+1]={0};
	        cnt[0]=1;
	        cnt[1]=1;
	        for(int i=0;i<n;i++)
	        {
	            if(arr[i]>0 && arr[i]<=n)
	            {
	                cnt[arr[i]]=1;
	            }
	        }
	        int ans = n+1;
	        for(int i=0;i<=n;i++)
	        {
	            if(cnt[i]!=1)
	            {
	                ans = i;
	                break;
	            }
	        }
	        cout<<ans<<endl;
	    }
	}
	return 0;
}
/*
5
85
-47 1 4 49 -18 10 26 18 -11 -38 -24 36 44 -11 45 20 -16 28 17 -49 47 -48 -33 42 2 6 -49 30 36 -9 15 39 -6 -31 -10 -21 -19 -33 47 21 31 25 -41 -23 17 6 47 3 36 15 -44 33 -31 -26 -22 21 -18 -21 -47 -31 20 18 -42 -35 -10 -1 46 -27 -32 -5 -4 1 -29 5 29 38 14 -22 -9 0 43 -50 -16 14 -26
5
1 2 3 4 5
5
0 -10 1 3 -20
15
37 6 -7 41 -23 15 9 -14 -18 1 -13 -22 25 -43 24 
22
8 45 -21 -13 -15 43 -32 -22 -7 -39 -22 -21 26 -46 -7 13 -37 -12 -44 -10 -46 -32

*/