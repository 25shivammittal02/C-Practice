//binary search
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int *arr, int start, int end, int k)
{
    if(end>=start)
    {
        int mid = (start+end)/2;
        if(arr[mid]==k)
        {
            return mid;
        }
        if(arr[mid]>k)
        {
            return binarySearch(arr, start, mid-1,k);
        }
        return binarySearch(arr, mid+1,end,k);
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
    int k;
    cin>>k;
    cout<<binarySearch(arr,0,n-1,k);
}

/*
Sample Input
6
1 2 3 4 5 6
3

*/