//https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum/0
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        string s;
        for(int i=0;i<n;i++)
        {
            if(i <=n-3)
            {
                s = s +"0";
            }
            else
            {
                s = s + "1";
            }
        }
        vector<string> v;
        v.push_back(s);
        while(next_permutation(s.begin(), s.end()))
        {
            v.push_back(s);
        }
        int cnt=0;
        for(auto x:v)
        {
            int sum =0;
            for(int i=0;i<n;i++)
            {
                if(x[i]=='1')
                {
                    sum+= arr[i];
                }
            }
            if(sum==k)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

/*

2
4 6
1 5 7 1
4 2
1 1 1 1

*/