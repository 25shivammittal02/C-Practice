#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	unordered_map<char,int> m;
	for(int i=0;i<s.length();i++)
	{
		m[s[i]]++;
	}
	int max = 0;
	char ans;
	for(auto itr=m.begin();itr!=m.end(); itr++)
	{
		if(itr->second > max)
		{
			max = itr->second;
			ans = itr->first;
		}
	}
	cout<<ans;
	return 0;
}