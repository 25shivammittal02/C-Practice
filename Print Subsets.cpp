#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() 
{
    string x = "abc";
    int l = x.length();
    int n = ((1<<l) -1);
    for(int i=n; i>0; i--)
    {
        for(int j=0; j<l; j++)
        {
            if(((i>>j) & 1)==1)
            {
                cout<<x.at(j);
            }
        }
        cout<<endl;
        
    }
}