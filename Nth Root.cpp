#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int ans=-1;
        if(m==1)
        {
            ans = 1;
        }
        else
        {
            int s = 0;
            int e = m/n;
            while(s<=e)
            {
                int mid = (s+e)/2;
                if(pow(mid, n) > m)
                {
                    e=mid-1;
                }
                else if(pow(mid, n) < m)
                {
                    s=mid+1;
                }
                else
                {
                    ans = mid;
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

/*

2
2 9
3 9


*/