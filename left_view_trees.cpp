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

void leftview(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    cout<<root->data<<" ";
    while(!q.empty())
    {
        node *f = q.front();
        if(f==NULL)
        {
            q.pop();
            if(q.front()!=NULL)
            {   
                node *t = q.front();
                cout<<t->data<<" ";
            }
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            q.pop();
            if(f->left!=NULL)
            {
                q.push(f->left);
            }
            if(f->right!=NULL)
            {
                q.push(f->right);
            }
        }
    }

}

int main()
{
    node *root = LevelWiseInput();
    leftview(root);
}

/*
Sample Input
level wise input
1 2 3 4 5 -1 6 -1 -1 -1 -1 -1 -1
*/