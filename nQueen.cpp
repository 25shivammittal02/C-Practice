//N-Queen
#include<bits/stdc++.h>
using namespace std;

bool isSafe(int board[][10], int i, int j, int n)
{
    //for column
    for(int row =0; row<i; row++)
    {
        if(board[row][j]==1)
        {
            return 0;
        }
    }
    //for left diagnol
    int x=i;
    int y=j;
    while(x>=0 and y>=0)
    {
        if(board[x][y]==1)
        {
            return 0;
        }
        x--;
        y--;
    }
    //for right diagnol
    x=i;
    y=j;
    while(x>=0 and y<n)
    {
        if(board[x][y]==1)
        {
            return 0;
        }
        x--;
        y++;
    }
    //position is safe
    return 1;
}

bool solveNQueen(int board[][10], int i, int n)
{
    if(i==n)
    {
        cout<<"Solution ->"<<endl;
        //print board
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
        return 0; // should have returned true, but we returned false so as to get all the configurations
    }

    //rec case
    for (int j = 0; j < n; j++)
    {
        if(isSafe(board,i,j,n))
        {
            board[i][j]=1;
            bool nextQueenPossible = solveNQueen(board, i+1, n);
            if(nextQueenPossible == 1)
            {
                return true;
            }
            board[i][j]=0;
        }
    }
    //not possible to place queen
    return false;
}

int main()
{
    int n;
    cin>>n;
    int board[10][10] = {0};
    solveNQueen(board,0,n);
    return 0;
}

/*
Sample Input
4

*/