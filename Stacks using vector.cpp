#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Stack
{
private:
    vector<int> v;
public:
    void push(int data)
    {
        v.push_back(data);
    }
    void pop()
    {
        if(!empty())
        v.pop_back();
    }
    bool empty()
    {
        return v.size()==0;
    }
    int top()
    {
        return v[v.size()-1];
    }
};

int main()
{
    Stack s;
    for(int i=1;i<=5;i++)
    {
        s.push(i*i);
    }

    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
}
/*
Sample test case
*/