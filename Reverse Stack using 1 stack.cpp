//Reverse Stack using one extra stack
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    stack<int> s2;
    int n;
    cin>>n;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        s.push(a);
    }
    for(int i=0;i<n;i++)
    {
        int temp = s.top();
        s.pop();
        for(int j=0;j<n-1-i;j++)
        {
            s2.push(s.top());
            s.pop();
        }
        s.push(temp);
        for(int j=0;j<n-1-i;j++)
        {
            s.push(s2.top());
            s2.pop();
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }   
}
/*
Sample test case
5
8 9 10 11 12

*/