#include <iostream>
using namespace std;


bool flag=false;
void maze(char in[][10],int out[][10],int i,int j,int n,int m)
{
    
   if(i<0 or i>=n or j<0 or j>=m or out[i][j]==1 or in[i][j]=='X')
   {
       return;
   }
    if(i==n-1 and j==m-1 and flag==false)
    {
        flag=true;
        out[n-1][m-1]=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<out[i][j]<<" ";
            }
            cout<<endl;
        
        }
        
    }
    out[i][j]=1;
    maze(in,out,i,j-1,n,m);
    maze(in,out,i,j+1,n,m);
    maze(in,out,i-1,j,n,m);
    maze(in,out,i+1,j,n,m);
    out[i][j]=0;
}

int main(int argc, const char * argv[]) {
    int n,m;
    cin>>n>>m;
    char input[n][10];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>input[i][j];
        }
    }
    int out[n][10];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            out[i][j]=0;
        }
    }
    

 
    
    maze(input,out,0,0,n,m);
    if(flag==false)
    {
        cout<<"NO PATH FOUND";
    }

    
    return 0;
}