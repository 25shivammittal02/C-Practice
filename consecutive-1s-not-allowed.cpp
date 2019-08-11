//https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes/0/?ref=self
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int countP(int l)
{
    //static int sum =0;
    //base
    if(l==1)
    {   
        return 2;
    }
    if(l==2)
    {
        return 3;
    }
    return countP(l-2) + countP(l-1);
}

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<countP(n)<<endl;
    }
    return 0;
}

/*

2
3
2

*/