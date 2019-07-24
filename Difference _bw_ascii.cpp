#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string s2;
    for(int i=0;i<s.length()-1;i++)
    {
        int dif = (int)s[i+1] - (int)s[i];
        s2.append(s,i,1);
        s2 += to_string(dif);
    }
    s2.append(s,s.length()-1,1);
    cout<<s2;
    return 0;
}