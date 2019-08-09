#include<bits/stdc++.h>
using namespace std;

bool possible(int arr[50][50], string s, int pos, int len, int n, int m, int x, int y)
{
    if(x==n or y==m)
    {
        return 0;
    }
    if(arr[x][y]==s[pos])
    {
        if(pos = len-1)
        {
            return true;
        }
        char q = arr[x][y];
        arr[x][y] = '*';
        bool check = possible(arr, s, pos+1, len, n, m, x, y+1);
        if(check == 1)
        {
            arr[x][y] = q;
            return true;
        }
        check = possible(arr, s, pos+1, len, n, m, x, y-1);
        if(check == 1)
        {
            arr[x][y] = q;
            return true;
        }
        check = possible(arr, s, pos+1, len, n, m, x+1, y);
        if(check == 1)
        {
            arr[x][y] = q;
            return true;
        }
        check = possible(arr, s, pos+1, len, n, m, x-1, y);
        if(check == 1)
        {
            arr[x][y] = q;
            return true;
        }
        return false;
    }
    return false;
}

bool solve(int arr[50][50], string s, int n, int m)
{
    int len = s.length();
    int x=0;
    int y=0;
    int cnt =0;
    while(x<n)
    {
        while(y<n)
        {
            if(possible(arr, s, 0, len, n, m, x, y))
            {
                return 1;
            }
            cnt++;
            y++;
        }
        x++;
    }
    cout<<cnt<<endl;
    return 0;

}

int main()
{
    int arr[50][50]= {
        {'A','B','C','E'},
        {'S','F','C','S'},
        {'A','D','E','E'}
    };

    int n = sizeof(arr) / sizeof(arr[0]);
    int m = sizeof(arr[0]) / sizeof(char);

    string s;
    cin>>s;
    cout<<solve(arr, s, n, m);
}

/*

ABFCCE

*/