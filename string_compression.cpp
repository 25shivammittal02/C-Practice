#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    string s;
    cin>>s;
    int cnt =1;
    string s2;
    s2.append(s,0,1);
    int i=1;
    while(i<=s.length())
    {   
        if(s[i] == s[i-1])
        {
            cnt++;
            i++;
        }
        else
        {
            s2 += to_string(cnt);
            cnt =1;
            s2.append(s,i,1);
            i++;
        }
    }
    cout<<s2;
}

/*
Sample Inputs
aaabbccds

*/