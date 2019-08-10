//https://practice.geeksforgeeks.org/problems/number-following-a-pattern/0#ExpectOP
#include <iostream>
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
    string ans = "123456789";
    ans = ans.substr(0,(s.length()+1));
    int i=0;
    while(i<s.length())
    {
        if(s[i]=='I')
        {
            i++;
        }
        else
        {
            int cnt =0;
            int temp = i;
            while(s[i]=='D' )
            {
                if(i==s.length())
                {
                    cnt++;
                    break;
                }
                cnt++;
                i++;
            }
            int start = temp;
            int end = temp + cnt+1;
            reverse(ans.begin()+start, ans.begin()+end);
        }
    }
    cout<<ans<<endl;
    }
    return 0;
}

/*
5
D
I
DD
IIDDD
DDIDDIID

21
12
321
126543
321654798
*/