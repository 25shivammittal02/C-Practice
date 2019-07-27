//Reverse Stack using Recursion
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insert_at_bottom(stack<int>& s, int d)
{
    //base case
    if(s.size()==0)
    {
        s.push(d);
        return;
    }

    //Rec case
    int temp = s.top();
    cout<<"temp while insert_at_bottom "<<temp<<endl;
    s.pop();
    insert_at_bottom(s,d);
    s.push(temp);
    cout<<"temp while insert_at_bottom has been pushed back"<<endl;
}

void reversestack_rec(stack<int>& s)
{
    //Base Case
    if(s.size()==0)
    {
        cout<<"while reversing Size has become 0"<<endl;
        return;
    }
    int t = s.top();
    cout<<"temp while reversing "<<t<<endl;
    s.pop();

    reversestack_rec(s);
    insert_at_bottom(s,t);
}

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
    reversestack_rec(s);
    for(int i=0;i<n;i++)
    {
        cout<<"Reversed Stack = "<<s.top()<<" ";
        s.pop();
    }   
}
/*
Sample test case
5
8 9 10 11 12

*/