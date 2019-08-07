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
    int arr[l2][l1];
    for(int i=0;i<l2;i++)
    {
        for(int j=0;j<l1;j++)
        {
            arr[i][j] = 0;
        }
    }
    cout<<"INITIAL MATRIX ->"<<endl;
    for(int i=0;i<l2;i++)
    {
        for(int j=0;j<l1;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int last =-1;
    for(int i=0;i<l2;i++)
    {
        for(int j=0;j<l1;j++)
        {
            if(s2[i]==s1[j] and j!=last)
            {
                last =j;
                if(i-1 < 0)
                {
                    arr[i][j] = 1;
                }
                else
                {
                    arr[i][j]= arr[i-1][j] +1; 
                }
                for(int k=j+1;k<l1;k++)
                {
                    arr[i][k] = arr[i][j];
                }
                break;
            }
            else
            {
                if(i-1 < 0)
                {
                    arr[i][j] = 0;
                }
                else
                {
                    arr[i][j]= arr[i-1][j]; 
                }
            }
        }
    }
    cout<<endl;
    for(int i=0;i<l2;i++)
    {
        for(int j=0;j<l1;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    map<int, int> m;
    cout<<"Common Sub-Sequence -> ";
    for(int i=0;i<l1;i++)
    {
        if(m.find(arr[l2-1][i])==m.end() and arr[l2-1][i]!=0 )
        {
            m[arr[l2-1][i]] = i;
            cout<<s1[i];
        }
    }
    cout<<endl<<"Length = "<<arr[l2-1][l1-1];
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