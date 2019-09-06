#include<iostream>
#include<bits/stdc++.h>
using namespace std;

template <typename t>
class Queue
{
private:
    vector<t> v;
public:
    void push(t data)
    {
        v.push_back(data);
    }
    void pop()
    {
        if(!empty())
        v.erase(v.begin());
    }
    bool empty()
    {
        return v.size()==0;
    }
    t top()
    {
        return v[0];
    }
};

int main()
{
    Queue<int> q;
    for(int i=1;i<=5;i++)
    {
        q.push(i*i);
    }

    while(!q.empty())
    {
        cout<<q.top()<<endl;
        q.pop();
    }
}
/*
Sample test case

*/