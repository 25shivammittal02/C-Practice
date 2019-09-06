// sum of any of the non-empty subsets of the set A is zero
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int max = pow(2,n)-1;
        // cout<<"Max = "<<max<<endl;
        bool ans = 0;
        for(int i=1;i<=max;i++)
        {
            int j =i;
            // cout<<"Solving for i = "<<i<<endl;
            int sum =0;
            for(int k=0;k<n;k++)
            {
                if(i&1)
                {
                    sum = sum + arr[n-1-k];
                }
                i = i>>1;
            }
            i =j;
            // cout<<"sum for i "<<i<<" = "<<sum<<endl;
            if(sum==0)
            {
                // cout<<"Ans found at i = "<<i<<endl;
                ans = 1;
                break;
            }
        }
        if(ans==1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}  

/*
Sample

1
4
1 2 3 -3
*/