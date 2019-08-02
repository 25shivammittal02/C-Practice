#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define hashmap unordered_map<char, node*>

class node
{
public:
    char data;
    hashmap h;
    bool IsTerminal;
    node(int d)
    {
        data = d;
        IsTerminal = 0;
    }
};

class tries
{
    node *root;
public:
    tries()
    {
        root = new node('\0');
    }
    //Insertion
    void addword(string s)
    {
        node *temp = root;
        for(int i=0;i<s.length();i++)
        {
            if(temp->h[s[i]]>0)
            {
                temp =temp->h[s[i]]; 
            }
            else
            {
                node *child = new node(s[i]);
                temp->h[s[i]] = child;
                temp = child;
            }
        }
        temp->IsTerminal = 1;
    }

    //Searching
    bool search(string s)
    {
        node *temp =root;
        for(int i=0;i<s.length();i++)
        {
            if(temp->h[s[i]]>0)
            {
                temp = temp->h[s[i]];
            }
            else
            {
                return false;
            }
        }
        // if(temp->IsTerminal==1)
        // {
        //     return true;
        // }
        // else
        // {
        //     return false;
        // }
        return temp->IsTerminal;
    }
};

int main()
{
    string words[5] ={"apple","ape", "coder", "coding blocks", " no"};
    tries t;
    for(int i=0;i<5;i++)
    {
        t.addword(words[i]);
    }

    string p;
    getline(cin,p);
    cout<<t.search(p);
    return 0;
}

/*
Sample test case

app
*/