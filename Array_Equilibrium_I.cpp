//Array Equilibrium O(n)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int equilibrium(int a[], int n)
{
	int leftarr[n];
	leftarr[0] =a[0];
	for(int i=1;i<n;i++)
	{
		leftarr[i] = leftarr[i-1] + a[i]; 
	}
	int rightarr[n];
	rightarr[n-1] =a[n-1];
	for(int i=n-2;i>=0;i--)
	{
		rightarr[i] = rightarr[i+1] + a[i]; 
	}
	for(int i=0;i<n;i++)
	{
		if(leftarr[i]==rightarr[i])
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