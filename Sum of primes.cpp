//https://practice.geeksforgeeks.org/problems/sum-of-prime/0/?ref=self
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
        int arr[n+1]={0};
        for(int i=2;i<=n;i++)
        {
            arr[i]=1;
        }
        for(int i=2;i<=n;i++)
        {
            if(arr[i]==1)
            {
                for(int j=i*2;j<=n;j=j+i)
                {
                    arr[j]=0;
                }
            }
        }
        // for(int i=0;i<=n;i++)
        // {
        //     cout<<i<<"->"<<arr[i]<<endl;
        // }
        int i,a;
        int ans =-1;
        for(i=2;i<=n;i++)
        {
            if(arr[i]==1)
            {
                a = n-i;
                if(arr[a]==1)
                {
                    ans = a;
                    break;
                }
            }
        }
        if(ans==-1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<min(i,ans)<<" "<<max(i,ans)<<endl;
        }
        
    }
    return 0;
}

/*


*/