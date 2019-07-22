//https://practice.geeksforgeeks.org/problems/count-the-triplets/0

#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int a;
		int cnt=0;
		vector<int> v;
		for(int j=0;j<n;j++)
		{
			cin>>a;
			v.push_back(a);
		}
		sort(v.begin(), v.end());
		for(int j=0;j<n;j++)
		{
			int s=j+1;
			int e=n-1;
			while(s<=e)
			{
				if((v[j]+v[s])==v[e])
				{
					cnt++;
					s++;
					e=n-1;
				}
				else if((v[j]+v[s])<v[e])
				{
					e--;
				}
				else
				{
					s++;
					e=n-1;
				}
			}
		}
		if (cnt==0)
		{
			cout<<"-1";
		}
		else
		{
			cout<<cnt;
		}
		cout<<endl;
	}
	return 0;
}
/*
Sample Input
2
4
1 5 3 2
3
3 2 7




1
10
7 2 5 4 3 6 1 9 10 12
*/