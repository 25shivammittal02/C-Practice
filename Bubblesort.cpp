//bubblesort
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr, int n)
{
    if(n==1)
    {
        return;
    }
    int k=0;
    while(k<n-1)
    {
        if(arr[k]>arr[k+1])
        {
            swap(arr[k],arr[k+1]);
        }
        k++;
    }
    bubbleSort(arr, n-1);
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
    bubbleSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

/*
Sample Input
6
10 5 2 7 11 1
*/