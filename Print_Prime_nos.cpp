#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    int n;
    cin>>n;
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
    for(int i=0;i<n+1;i++)
    {
        if(arr[i]==1)
        {
            sum+=arr[i];
            cout<<i<<" "; 
        }
        
    }
    cout<<endl<<"Total no of prime nos = "<<sum;
    return 0;
}

/*
Sample Inputs

*/