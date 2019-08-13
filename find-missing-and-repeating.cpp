//https://practice.geeksforgeeks.org/problems/find-missing-and-repeating/0
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int s[n+1] = {0};
        s[0] = -1;
        for(int i=0;i<n;i++)
        {
            s[arr[i]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(s[i] >1)
            {
                cout<<i<<" ";
                break;
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(s[i] == 0)
            {
                cout<<s[i]<<" ";
                break;
            }
        }
        
    }
    return 0;
}