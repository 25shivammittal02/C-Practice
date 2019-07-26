//O(n*log(log(n)))
//https://www.geeksforgeeks.org/sieve-of-eratosthenes/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int n;
    cin>>n;
    int m= n;
    n = n*20;
    bool arr[n+1] ={0};
    for(int i=2;i<n+1;i++)
    {
        arr[i] = 1;
    }
    for(int i=2;i<n+1;i++)
    {
        if(arr[i]==1)
        {
            for(int j=i*2;j<n+1;j=j+i)
            {
                arr[j] = 0;
            }
        }
    }
    int sum =0;
    int i;
    for( i=0;i<n+1;i++)
    {
        if(arr[i]==1)
        {
            sum+=arr[i];
            if(sum==m)
            {
                break;
            } 
        }  
    }
    cout<<i;
    return 0;
}

/*
Sample Inputs

*/