#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        data = d;
        left= NULL;
        right = NULL;
    }
};

node *LevelWiseInput()
{
    queue<node *> q;
    int d;
    cin>>d;
    node *root = new node(d);
    q.push(root);

    while(!q.empty())
    {
        int c1,c2;
        cin>>c1>>c2;
        node *f= q.front();
        q.pop();
        if(c1!=-1)
        {
            f->left = new node(c1);
            q.push(f->left);
        }
        if(c2!=-1)
        {
            f->right = new node(c2);
            q.push(f->right);
        }
    }
    return root;
}

void rightview(node *root)
{
    vector<node *> q;
    q.push_back(root);
    q.push_back(NULL);
    while(!q.empty())
    {
        node *f = q[0];
        if(q[1]==NULL and q.size()>1)
        {
            cout<<f->data<<" ";
        }
        if(f==NULL)
        {
            q.erase(q.begin());
            if(!q.empty())
            {
                q.push_back(NULL);
            }
        }
        else
        {
            q.erase(q.begin());
            if(f->left!=NULL)
            {
                q.push_back(f->left);
            }
            if(f->right!=NULL)
            {
                q.push_back(f->right);
            }
        }
    }

}

int main()
{
    node *root = LevelWiseInput();
    rightview(root);
}

/*
Sample Input
level wise input
1 2 3 4 5 -1 6 -1 -1 -1 -1 -1 -1
*/