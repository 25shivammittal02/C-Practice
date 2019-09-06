//https://practice.geeksforgeeks.org/problems/josephus-problem/1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int josephus(int n, int k)
{
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        v.push_back(i+1);
    }
    int i=0;
    while(n!=1)
    {
        int a = i+k-1;
        while(a>=n)
        {
            a=a-n;
        }
        v.erase(v.begin()+a);
        i=a;
        n--;
    }
    return v[0];
}

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        cout<<josephus(n,k)<<endl;
    }
    return 0;
}

/*
2
3 2
6 2
*/