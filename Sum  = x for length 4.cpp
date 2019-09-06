#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<4)
        {
            cout<<"0"<<endl;
            break;
        }
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int x;
        cin>>x;
        string s ="";
        for(int i=0;i<n;i++)
        {
            if(i<(n-4))
            {
                s= s+'0';
            }
            else
            {
                s= s+'1';
            }
        }
        vector<string> v;
        v.push_back(s);
        while(next_permutation(s.begin(), s.end()))
        {
            v.push_back(s);
        }
        int ans =0;
        for(auto y:v)
        {
            int sum =0;
            for(int i=0;i<n;i++)
            {
                if(y[i]=='1')
                {
                    sum = sum + arr[i];
                }
            }
            if (sum==x)
            {
                ans = 1;
                break;
            }
        }
        cout<<ans<<endl;
    }
}


/*
Sample Input
1
6
1 5 1 0 6 0
7

*/