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
        int arr[n+1][m+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                arr[i][j] =0;
            }
        }
        int c[n+1][m+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                c[i][j] =0;
            }
        }
        int p[n+1][m+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                p[i][j] =0;
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>c[i][j];
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>p[i][j];
            }
        }
        for(int i=2;i<=m;i++)
        {
            arr[1][i] = c[1][i] + c[1][i-1];
        }
        for(int i=2;i<=n;i++)
        {
            arr[i][1] = c[i][1] + c[i-1][1];
        }
        for(int i=2;i<=n;i++)
        {
            for(int j=2;j<=m;j++)
            {
                arr[i][j] = min(arr[i-1][j] + p[i-1][j] , arr[i][j-1] + p[i][j-1]) + c[i][j];
            }
        }
        cout<<arr[n][m]<<endl; 
    }
}
/*
2
2 2
1 2
3 4
5 6
7 8
2 2
1 2
3 4
5 6
1 8

*/