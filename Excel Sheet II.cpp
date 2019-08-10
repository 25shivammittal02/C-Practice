//https://practice.geeksforgeeks.org/problems/excel-sheet-part-2/0/?ref=self
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        reverse(s.begin(), s.end());
        int a =0;
        for(int i=0; i<s.length(); i++)
        {
            a = a + (pow(26,i) * (s[i] - 64));
        }
        cout<<a<<endl;
    }
}
