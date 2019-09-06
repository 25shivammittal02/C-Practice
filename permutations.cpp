//permutations
#include<bits/stdc++.h>
using namespace std;

void permu(char *in, int i)
{
    if(in[i]=='\0')
    {
        cout<<in<<endl;
        return;
    }
    for(int j=i;in[j]!='\0';j++)
    {
        swap(in[i], in[j]);
        permu(in, i+1);
        swap(in[i], in[j]); //back tracking swapping back to get the orignal string
    }
}

int main()
{
    char in[100];
    cin>>in;
    permu(in, 0);
}

/*
Sample Input

abcd
*/