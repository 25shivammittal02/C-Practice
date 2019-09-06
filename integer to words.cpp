//integer to words
#include<bits/stdc++.h>
using namespace std;

string s[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

string numbertostring(int n)
{
    if(n/10 == 0)
    {
        return s[n]; 
    }
    return numbertostring(n/10) +" "+ s[n%10];
}

int main()
{
    int n;
    cin>>n;
    cout<<numbertostring(n);
}

/*
Sample Input

2048
*/