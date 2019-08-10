//https://practice.geeksforgeeks.org/problems/excel-sheet/0#ExpectOP
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        while(n>0)
        {
            int r = n%26;
            n = n/26;
            char c;
            if(r==0)
            {
                n=n-1;
                s = "Z"+s;
            }
            else
            {
                c = 64 + r;
                s = c + s;
            }
        }
        cout<<s<<endl;
    }
}

/*

*/