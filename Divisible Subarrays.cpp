// find the subarray, whose sum is equal to n
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int factorial(int a)
{
    if(a==1 or a==0)
    {
        return 1;
    }
    return a*factorial(a-1);
}

int C(int x, int y)
{
    if(x<2)
    {
        return 0;
    }
    return ((factorial(x))/(factorial(y)*factorial(x-y)));
}

int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int sum = 0;
        map<int, int> m;
        m[0] = 1; // because NULL set
        for(int i=0;i<n;i++)
        {
            sum += arr[i];
            sum = sum%n;
            m[sum]++;
            arr[i] = sum;
        }
        cout<<"array = ";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl<<"Map = ";
        for(int i=0;i<n;i++)
        {
            cout<<m[i]<<" ";
        }
        cout<<endl;
        int ans =0;
        for(int i=0;i<n;i++)
        {
            ans = ans +(C(m[i] , 2));
        }
        cout<<"Final Answer = "<<ans<<endl;

    }
}

/*
Sample Inputs
2
5
5 5 5 5 5
4
1 3 5 7
*/