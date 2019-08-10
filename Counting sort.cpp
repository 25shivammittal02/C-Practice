//Counting sort
#include<bits/stdc++.h>
using namespace std;

void countSort(string arr, int n)
{
    int a[27] ={0};    
    for(int i = 0; i < n; i++)
    {
        int x = arr[i] - 96;
        a[x]++;
    }
    string s;
    for(int i=1;i<=26;i++)
    {
        while(a[i]!=0)
        {
            char x = i + 'a' -1;
            s= s + x;
            a[i]--;
        }
    }
    cout<<s<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s1;
        cin>>s1;
        countSort(s1,n);
    }
}


/*
2
5
edsab
13
geeksforgeeks


*/