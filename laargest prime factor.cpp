#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int s = n/2;
        long long int arr[s+1] = {0};
        for(long long int i=2;i<=s;i++)
        {
            arr[i] =1;
        }
        for(long long int i=2;i<=s;i++)
        {
            if(arr[i]==1)
            {
                for(long long int j=i*2;j<=s;j=j+i)
                {
                    arr[j]=0;
                }
            }
        }
        vector<long long int> prime;
        for(long long int i=0; i<=s;i++)
        {
            if(arr[i]==1)
            {
                prime.push_back(i);
            }
        }
        vector<long long int> pfactors;
        long long int max =0;
        while(n!=1)
        {
            for(long long int x:prime)
            {
                if(n%x == 0)
                {
                    if(x>max)
                    {
                        //cout<<"x = "<<x<<endl;
                        max = x;
                    }
                    pfactors.push_back(x);
                    n = n/x;
                }
            }
            if(max==0)
            {
                max = n;
                break;
            }
        }
        
        cout<<max<<endl;
    }
}