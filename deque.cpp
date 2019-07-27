#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> q;
    q.push_front(1);
    q.push_back(2);
    q.push_back(3);
    q.push_front(0);
    q.push_front(-1);

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop_front();
    }

    // while(!q.empty())
    // {
    //     cout<<q.back()<<" ";
    //     q.pop_back();
    // }
    
}
/*
Sample test case


*/