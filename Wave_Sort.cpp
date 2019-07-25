#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(arr[1]>arr[0])
    {
        cout<<"swapping "<<arr[0]<<" and "<<arr[1]<<endl;
        swap(arr[1],arr[0]);
    }
    for(int i=2;i<n;i=i+2)
    {
        if(arr[i-1]>arr[i])
        {
            cout<<"swapping "<<arr[i-1]<<" and "<<arr[i]<<endl;
            swap(arr[i-1],arr[i]);
        }
        if(arr[i+1]>arr[i])
        {
            cout<<"swapping "<<arr[i+1]<<" and "<<arr[i]<<endl;
            swap(arr[i+1],arr[i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

/*
Sample Inputs
6
1 2 3 4 5 6
*/