//
#include<bits/stdc++.h>
using namespace std;

int linearSearch(int *arr, int n, int pos, int k)
{
    if(pos==n)
    {
        return -1;
    }
    if(arr[pos]==k)
    {
        return pos+1;
    }
    else
    {
        linearSearch(arr, n, pos+1, k);
    }
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
    int k;
    cin>>k;
    cout<<linearSearch(arr,n,0,k);
}

/*
Sample Input

6
2 4 1 6 3 7
5
*/