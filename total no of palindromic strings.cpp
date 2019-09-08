//total palindromic substirngs
#include <bits/stdc++.h> 
using namespace std; 

void IsPalindrome(string s)
{
    int n = s.length();
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                arr[i][j]=1;
            }
            else
            {
                arr[i][j]=0;
            }
        }
    }
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            arr[i][i+1]=1;
        }
    }
    for(int i=n-3;i>=0;i--)
    {
        for(int j=i+2;j<n;j++)
        {
            if(arr[i+1][j-1]==1 and s[i]==s[j])
            {
                arr[i][j]=1;
            }
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==1)
            {
                cnt++;
            }
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"No of Palindrome = "<<cnt;
    return;
}

int main() 
{ 
    string s;
    cin>>s;
    IsPalindrome(s);
    return 0; 
} 