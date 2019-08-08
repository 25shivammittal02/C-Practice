// * b/w even and - b/w odd
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s = to_string(n);
    string s2;
    int x,y;
    for(int i=0; i<s.length()-1;i++)
    {
        char a = s[i];
        char b = s[i+1];
        x = a-'0';
        y = b-'0';
        if(x % 2 == 0 and y % 2 == 0) //even
        {
            string temp = to_string(x) + '*';
            s2.append(temp);
        }
        else if(x % 2 == 1 and y % 2 == 1) //odd
        {
            string temp = to_string(x) + '-';
            s2.append(temp);
        }
        else
        {
            s2.append(to_string(x));
        }
    }
    s2.append(to_string(y));
    cout<<endl<<s2;
}

/*
Sample test case
12324434

*/