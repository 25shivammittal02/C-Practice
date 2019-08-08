#include<bits/stdc++.h>
using namespace std;

int main()
{
    string m;
    cin>>m;
    set<string> set1;
    int len = m.length();
    int l;
    cin>>l;
    if(l>len)
    {
        return 0;
    }
    string s = "";
    for(int i=0;i<len;i++)
    {
        if(i<(len-l))
        {
            s=s + '0';
        }
        else
        {
            s=s + '1';
        }
    }
    set1.insert(s);
    while(next_permutation(s.begin(), s.end()))
    {
        set1.insert(s);
    }
    set<string> set2;
    for(auto x:set1)
    {
        string s2 = "";
        for(int i=0;i<x.size();i++)
        {
            if(x[i] == '1')
            {
                s2 = s2+m[i];
            }
        }
        sort(s2.begin(), s2.end());
        set2.insert(s2);
        while(next_permutation(s2.begin(), s2.end()))
        {
            set2.insert(s2);
        }
    }
    cout<<"Permutations ->"<<endl;
    for(auto y:set2)
    {
        cout<<y<<endl;
    }
    cout<<set2.size();
    return 0;
}