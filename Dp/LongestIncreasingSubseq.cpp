//length of Longest increasing sub sequence
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<pair <int, int> > v;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(make_pair(a,1));
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(v[j].first < v[i].first)
            {
                v[i].second = max (v[i].second , (v[j].second +1));
            }
        }

    }
    int max =0;

    for(auto x:v)
    {
        cout<<x.first<<" "<<x.second<<endl;
        if(x.second>max)
        {
            max = x.second;
        }
    }
    cout<<max;
}

/*
Sample test case
10
10 22 9 33 21 50 41 60 80 6
*/