#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    n=n+1;
    string arr[n];
    for(int i=3;i<n;i=i+3)
    {
        arr[i] = "fuzz";
    }
    for(int i=5;i<n;i=i+5)
    {
        if(arr[i] == "fuzz")
        {
            arr[i] = arr[i] + "buzz";
        }
        else
        {
            arr[i] = "buzz";            
        }
    }
    for(int i=1;i<n;i++ )
    {
        if(arr[i] == "")
        {
            cout<<i<<endl;
        }
        else
        {
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}