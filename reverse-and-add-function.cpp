//https://www.geeksforgeeks.org/reverse-and-add-function/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkpalndrome(int a)
{
    string s = to_string(a);
    int n = s.length();
    for(int i=0; i<(n/2); i++ )
    {
        if(s[i] != s[n-1-i])
        {
            return 0;
        }
    }
    return 1;
}

int reverse(int b)
{
    string s = to_string(b);
    int n= s.length();
    for(int i=0;i<s.length()/2;i++)
    {
        swap(s[i], s[n-1-i]);
    }
    int n1 = stoll(s);
    return n1;
}

int main()
{
    long long int n;
    cin>>n;
    int cnt;
    while(1)
    {
        if(checkpalndrome(n))
        {
            cout<<n;
            return 0;
        }
        else
        {
            long long int n1 = reverse(n);
            n = n1+n;
            cnt++;
            if(cnt>1000 or n>4294967295)
            {
                cout<<"No palindrome exist";
                return 0;
            }
        }
    } 
}

/*
Sample test case

*/