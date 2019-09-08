//https://www.geeksforgeeks.org/given-a-sequence-of-words-print-all-anagrams-together/
#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, string> p1, pair<int, string> p2)
{
    return p1.second < p2.second;
}

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector< pair<int, string> > v,v2;
        int i=0;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            v.push_back(make_pair(i,s));
            v2.push_back(make_pair(i,s));

        }
        for(int i=0;i<n;i++)
        {
            string temp = v2[i].second;
            sort(temp.begin(), temp.end());
            v2[i].second = temp;
        }
        sort(v2.begin(), v2.end(), compare);
        for(auto x:v2)
        {
            cout<<x.first<<" "<<x.second<<endl;
        }
        unordered_map<string,int> h;
        for(auto x:v2)
        {
            h[x.second]++;
        }
        vector<int> ans;
        for(auto x:h)
        {
            ans.push_back(x.second);
        }
        sort(ans.begin(), ans.end());
        for(auto x:ans)
        {
            cout<<x<<" ";
        }
        cout<<endl;
        vector<string> v3;
        for(auto y:v2)
        {
            int t = y.first;
            v3.push_back(v[t].second);
        }
        for(auto z:v3)
        {
            cout<<z<<endl;
        }
    }
}

/*
sample input
2
5
act cat tac god dog
3
act cat tac
*/