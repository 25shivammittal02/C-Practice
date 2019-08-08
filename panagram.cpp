//Panagram
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    for(int i=0;i<s.length();i++)
    {
        s[i] = tolower(s[i]);
    }
    map<char , int> m;
    for(char i='a';i<='z';i++)
    {
        m[i]=0;
    }
    for(int i=0;i<s.length();i++)
    {
        if(m.find(s[i]) != m.end()) //if present then enter if condition
        {
            m[s[i]]++;
        }
    }
    for(auto x:m)
    {
        if(x.second ==0)
        {
            cout<<x.first;
            return 0;
        }
    }
    cout<<"Panagram";
}

/*
Sample test case
Fox nymphs<grab quick-jived waltz
*/