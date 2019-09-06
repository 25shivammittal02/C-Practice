//https://www.geeksforgeeks.org/lexicographic-rank-of-a-string/
#include <bits/stdc++.h> 
using namespace std;  

int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*fact(n-1);
}

int rank(string s)
{
    if(s.length()==1)
    {
        return 1;
    }
    int cnt =0;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]>s[0])
        {
            cnt++;
        }
    }
    return cnt*fact(s.length()-1) + rank(s.substr(1,s.length()-1));
}

int main() 
{ 
    string s;
    cin>>s;
    cout<<rank(s);
    return 0;
}

/*
sample input

string


598
*/