//find duplicates
#include <bits/stdc++.h> 
using namespace std;  

void findDuplicates(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[abs(arr[i])] > 0)
        {
            arr[abs(arr[i])] *= -1;
        }
        else
        {
            cout<<abs(arr[i])<<" ";
        }
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
    findDuplicates(arr,n);
} 


/*
Sample
6
1 2 3 1 2 5
*/