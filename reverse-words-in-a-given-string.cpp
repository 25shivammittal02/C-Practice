//https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1

#include<bits/stdc++.h>
using namespace std;

void reverseWords(char *s) {
    // Your code here
    vector<string> v;
    string s1="";
    for(int i=0;s[i]!='\0'; i++)
    {
        if(s[i+1]!='\0')
        {
            if(s[i]=='.')
            {
                v.push_back(s1);
                v.push_back(".");
                s1 = "";
            }
            else
            {
                s1 = s1 + s[i];
            }   
        }
        else
        {
            s1 = s1 + s[i];
            v.push_back(s1);
        }
    }
    reverse(v.begin(), v.end());
    for(auto x:v)
    {
        cout<<x;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        char s[10000];
        cin >> s;
        reverseWords(s);
        cout<<endl;
    }
}

/*
2
i.like.this.program.very.much
pqr.mno

*/