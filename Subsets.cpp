//subsets
#include<bits/stdc++.h>
using namespace std;
vector<string> vec;
void PrintSubsets(string s,int n)
{
    int v = pow(2,n);
    int k=0;
    while(k<=v)
    {
        int i = k;
        string ans ="";
        for(int j=0;j<n;j++)
        {
            if(i&1 ==1)
            {
                ans = s[n-1-j] + ans;
            }
            i = i>>1;
        }
        vec.push_back(ans);
        k++;
    }
}

int main()
{
    string s;
    cin>>s;
    int n = s.length();
    PrintSubsets(s,n);
    for(int i=0;i<(pow(2,n));i++)
    {
        cout<<i<<"-"<<vec[i]<<endl;
    }
}

/*
Sample Input
abcd
*/