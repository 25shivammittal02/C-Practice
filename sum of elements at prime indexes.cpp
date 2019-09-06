// Given an array of integers, find out the sum of elements at prime indexes.
#include <bits/stdc++.h>
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
    int seive[n];
    seive[0] = 0;
    seive[1] = 0;
    for(int i=2;i<n;i++)
    {
        seive[i]=1;
    }
    for(int i=2;i<n;i++)
    {
        if(seive[i]==1)
        {
            for(int j=2*i;j<n;j = j+i)
            {
                seive[j]=0;
            }
        }
    }
    int sum =0;
    for(int i=0;i<n;i++)
    {
        sum = sum + (arr[i]*seive[i]);
    }
    cout<<sum;
}  

/*
Sample
7
2 4 8 6 10 -1 5

*/