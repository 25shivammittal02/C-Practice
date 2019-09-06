//graph using adjlist
#include <bits/stdc++.h> 
using namespace std;  

class graph
{
    int V;
    list<int> *adjlist;
public:
    graph(int v)
    {
        V=v;
        adjlist = new list<int>[V];
    }
    void addEdge(int u, int v, bool bidir = true)
    {
        adjlist[u].push_back(v);
        if(bidir==1)
        {
            adjlist[v].push_back(u);
        }
    }
    void printAdjlist()
    {
        for(int i=0;i<V;i++)
        {
            cout<<i<<"->";
            for(auto node:adjlist[i])
            {
                cout<<node<<",";
            }
            cout<<endl;
        }
    }
};

int main() 
{ 
    graph g(4);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(0,3);
    g.addEdge(1,3);
    g.addEdge(3,2);

    g.printAdjlist();

    return 0;

} 
