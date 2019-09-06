//phone keypad
#include<bits/stdc++.h>
using namespace std;

string s[10] = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

void keypad(char *in, char *out, int i, int j)
{
    if(in[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    int c = in[i] -'0';
    int l = s[c].length();
    for(int k=0;k<l;k++)
    {
        out[j] = s[c][k];
        keypad(in, out, i+1, j+1); 
    }
}

int main()
{
    char in[100];
    cin>>in;
    char out[100];
    keypad(in, out, 0, 0);
}

/*
Sample Input
225
*/