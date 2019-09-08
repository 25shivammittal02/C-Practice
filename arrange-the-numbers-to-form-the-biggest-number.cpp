//https://www.geeksforgeeks.org/given-an-array-of-numbers-arrange-the-numbers-to-form-the-biggest-number/
#include <bits/stdc++.h>
using namespace std;

bool compare(string a, string b)
{
    int x = stoi(a+b);
    int y = stoi(b+a);
    return x>y;
}

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> v;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            v.push_back(s);
        }
        sort(v.begin(), v.end(), compare);
        for(auto x:v)
        {
            cout<<x;
        }
        cout<<endl;
    }
    return 0;
}

/*
2
5
3 30 34 5 9
4
54 546 548 60
*/