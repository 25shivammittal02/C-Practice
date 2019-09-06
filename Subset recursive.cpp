//subsets recursive
#include<bits/stdc++.h>
using namespace std;

void PrintSubsets(char *in, char *out, int i, int j)
{
    if(in[i]=='\0')
    {
        out[j] = '\0';
        cout<<out<<endl;
        return;
    }
     out[j]=in[i];
     PrintSubsets(in, out, i+1,j+1);

     PrintSubsets(in, out, i+1,j);
}

int main()
{
    char in[100];
    cin>>in;

    char out[100];
    PrintSubsets(in, out, 0,0);
}

/*
Sample Input
abcd
*/