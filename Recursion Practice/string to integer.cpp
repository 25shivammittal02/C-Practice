#include<bits/stdc++.h>
using namespace std;

int toInt(string s, int n)
{
    if(n==1)
    {
        return s[0] -'0';
    }
    return(10* toInt(s.substr(0,n-1) , n-1) + s[n-1] - '0');
}

int main()
{
    string s;
    cin>>s;
    cout<<toInt(s, s.length());
}

/*
Sample Input
12324

*/