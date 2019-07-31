#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    vector<string> v;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        v.push_back(s);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>s;
        for(int j=0;j<n;j++)
        {
            //string s2 = v[j].substr(0,s.length());
            if (s==v[j].substr(0,s.length()))
            {
                cout<<"Ans -> "<<v[j]<<endl;
            }
        }
    }
}

/*
Sample test case
4
pet
peter
rat
rack
5
pe
pet
r
rac
rat
*/