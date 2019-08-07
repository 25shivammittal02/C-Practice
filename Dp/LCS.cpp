//Longest common sub sequence
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int l2= s2.length();
    int l1 = s1.length();
    int arr[l2+1][l1+1];
    for(int i=0;i<=l2;i++)
    {
        for(int j=0;j<=l1;j++)
        {
            arr[i][j] = 0;
        }
    } 
    for(int i=1;i<=l2;i++)
    {
        for(int j=1;j<=l1;j++)
        {
            if(s2[i-1]==s1[j-1])
            {
                arr[i][j] = arr[i-1][j-1] +1;
            }
            else
            {
                arr[i][j] = max(arr[i][j-1] , arr[i-1][j]);
            }
        }
    }
    cout<<"Length = "<<arr[l2][l1]<<endl;
    cout<<"Final matri = "<<endl;
    for(int i=0;i<=l2;i++)
    {
        for(int j=0;j<=l1;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"common Substring = ";
    map<int, int> m;
    for(int i=1;i<=l1;i++)
    {
        if(m.find(arr[l2][i])==m.end() and arr[l2][i]!=0 )
        {
            m[arr[l2][i]] = i-1;
            cout<<s1[i-1];
        }
    }
}

/*
Sample test case
shivammittal
vaam

abcde
bbd

abc
acd
*/