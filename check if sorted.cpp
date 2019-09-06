#include<bits/stdc++.h>
using namespace std;

bool IsSorted(int *arr, int pos, int n)
{
    if(pos == n-1)
    {
        return true;
    }
    if(arr[pos]<arr[pos+1] and IsSorted(arr, pos+1,n))
    {
        return true;
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
    cout<<IsSorted(arr, 0, n);
}
/*
Sample Input

6
2 3 5 7 9 1

*/