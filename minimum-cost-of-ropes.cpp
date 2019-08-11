//https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes/0/?ref=self
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        priority_queue<long long int, vector<long long int>, greater<long long int> > q;
        long long int a;
        for(long long int i=0;i<n;i++)
        {
            cin>>a;
            q.push(a);
        }
        long long int sum = 0;
        while(q.size()!=1)
        {
            long long int x = q.top();
            q.pop();
            long long int y = q.top();
            q.pop();
            sum += x+y;
            q.push(x+y);
        }
        cout<<sum<<endl;
    }
    return 0;
}

/*

2
4
4 3 2 6
5
4 2 7 6 9

*/