#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    stack<char> stack;
    if(s.length()%2==1)
    {
        cout<<"Rejected because of size"<<endl;
        cout<<"No";
        return 0;
    }
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == '(' or s[i] == '{' or s[i] == '[')
        {
            cout<<"Inserted "<<s[i]<<endl;
            stack.push(s[i]);
        }
        else if(s[i] == ')')
        {
            cout<<") encountered"<<endl;
            if(stack.top() == '(')
            {
                cout<<"Top of stack = ("<<endl;
                stack.pop();
                cout<<"Pop Done"<<endl;
            }
            else
            {
                cout<<"Top of stack is not = ("<<endl;
                cout<<"No";
                return 0;
            }
        }
        else if(s[i] == '}')
        {
            cout<<"} encountered"<<endl;
            if(stack.top() == '{')
            {
                cout<<"Top of stack = {"<<endl;
                stack.pop();
                cout<<"Pop Done"<<endl;
            }
            else
            {
                cout<<"Top of stack is not = {"<<endl;
                cout<<"No";
                return 0;
            }
        }
        else if(s[i] == ']')
        {
            cout<<"] encountered"<<endl;
            if(stack.top() == '[')
            {
                cout<<"Top of stack = ["<<endl;
                stack.pop();
                cout<<"Pop Done"<<endl;
            }
            else
            {
                cout<<"Top of stack is not = ["<<endl;
                cout<<"No";
                return 0;
            }
        }
        else
        {
            cout<<"Garbage Value encountered Ans = No";
            return 0;
        }
    }
    if(stack.empty())
    {
        cout<<"Stack empty"<<endl;
        cout<<"Ans = Yes";
    }
    else
    {
        cout<<"Stack not empty"<<endl;
        cout<<"Ans = No";
    }
    return 0;
}
/*
Sample test case
((())){{}}[]{a
*/