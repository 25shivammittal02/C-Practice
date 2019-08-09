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
        int arr[n+1] = {0};
        for(int i=2;i<n+1;i++)
        {
            arr[i] =1;
        }
        for(int i=2;i<n+1;i++)
        {
            if(arr[i]==1)
            {
                for(int j=i*2;j<n+1;j=j+i)
                {
                    arr[j]=0;
                }
            }
        }
        vector<int> prime;
        for(int i=0; i<n+1;i++)
        {
            if(arr[i]==1)
            {
                prime.push_back(i);
            }
        }
        vector<int> pfactors;
        while(n!=1)
        {
            for(auto x:prime)
            {
                if(n%x == 0)
                {
                    pfactors.push_back(x);
                    n = n/x;
                    break;
                }
            }
        }
        cout<<"Prime factors = ";
        for(auto y:pfactors)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
}

/*
2
67
44

*/