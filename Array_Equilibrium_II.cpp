//Array Equilibrium O(n^2)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int equilibrium(int a[], int n)
{

	for(int i=1;i<n-1;i++)
	{
		int left_sum =0;
		int right_sum =0;
		for(int j=0;j<i;j++)
		{
			left_sum += a[j];
		}
		cout<<"left sum for index "<<i<<" = "<<left_sum<<endl;
		for(int j=i+1;j<n;j++)
		{
			right_sum += a[j];
		}
		cout<<"right sum for index "<<i<<" = "<<right_sum<<endl;
		if(left_sum == right_sum)
		{
			return i;
		}
	}
	return -1;
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
	cout<<equilibrium(arr, n);
	return 0;
}
/*
sample test case
7
-7 1 5 2 -4 3 0

*/