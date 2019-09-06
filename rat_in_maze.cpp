//rat in maze
#include<bits/stdc++.h>
using namespace std;

bool ratInMaze(char maze[10][10], int soln[][10], int i, int j, int m, int n)
{
    if(i==m and j==n)
    {
        //path exists
        soln[m][n]=1;
        //print path
        cout<<"Path ="<<endl;
        for(int k=0;k<=m;k++)
        {
            for(int l=0;l<=n;l++)
            {
                cout<<soln[k][l]<<" ";
            }
            cout<<endl;
        }
        return true;
    }
    //rat in grid
    if(i>m or j>n)
    {
        return false;
    }
    if(maze[i][j]=='X')
    {
        return false;
    }
    //assume sol exits through crrent cell
    soln[i][j]=1; 
    bool rightSuccess = ratInMaze(maze, soln, i,j+1,m,n);
    bool downSuccess = ratInMaze(maze, soln, i+1,j,m,n);
    soln[i][j] =0;
    if(rightSuccess or downSuccess)
    {
        return true;
    }
    return false;
}

int main()
{
    char maze[10][10] = {
        "OOOO",
        "OOXO",
        "OOOX",
        "OXOO"
    };
    int soln[10][10] = {0};
    int m=4;
    int n=4;
    bool ans = ratInMaze(maze, soln, 0,0,m-1,n-1);
    cout<<ans; 
}

/*
Sample Input


*/