#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    unordered_map<string, vector<int> > m;
    for(int i=0;i<n;i++)
    {
        while(1)
        {
            string s;
            cin>>s;
            if(s!="END")
            {
                m[s].push_back(i);
            } 
            else
            {
                break;
            }
        }
    }
    for(auto i:m)
    {   
        cout<<i.first<<"->>";
        for(auto d:i.second)
        {
            cout<<d<<" ";
        }
        cout<<endl;
    }

    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        vector<string> v;
        while(1)
        {
            string s;
            cin>>s;
            if(s!="END")
            {
                v.push_back(s);
            } 
            else
            {
                break;
            }
        }
        unordered_map<int , int> h;
        for(int j=0;j<v.size();j++)
        {
            for(auto k:m[v[j]])
            {
                h[k]++;
            }
        }
        int cnt =0;
        for(auto j:h)
        {
            if(j.second == v.size())
            {
                cnt++;
            }
        }
        cout<<"Present in "<<cnt<<endl;
    }
}

/*
Sample test case
3
a b c d END
b f g a END
x c b g END
2
k j END
g END
*/