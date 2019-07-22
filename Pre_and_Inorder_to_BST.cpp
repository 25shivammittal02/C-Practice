#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node
{
public:
	int key;
	node *left;
	node *right;
	node (int d)
	{
		key=d;
		left = NULL;
		right = NULL;
	}
};

void PreorderPrint(node *root)
{
	if(root==NULL)
	{
		return;
	}
	if(root->left != NULL and root->right != NULL)
	{
		cout<<root->left->key<<" => "<<root->key<<" <= "<<root->right->key<<endl;
	}
	if(root->left != NULL and root->right == NULL)
	{
		cout<<root->left->key<<" => "<<root->key<<" <= END"<<endl;
	}
	if(root->left == NULL and root->right != NULL)
	{
		cout<<"END => "<<root->key<<" <= "<<root->right->key<<endl;
	}
	if(root->left == NULL and root->right == NULL)
	{
		cout<<"END => "<<root->key<<" <= END"<<endl;
	}
	PreorderPrint(root->left);
	PreorderPrint(root->right);
}

node* preToBST(int *pre,int *in,int s,int e)
{
    static int x = 0;
    if(s>e){
        return NULL;
    }
    node*root = new node(pre[x]);
    //search the index of x in preorder
    int j;
    for(j=s;j<=e;j++){
        if(in[j]==pre[x]){
            break;
        }
    }
    x++;
    //j-->index of pre[x] in inorder
    root->left = preToBST(pre,in,s,j-1);
    root->right  = preToBST(pre,in,j+1,e);
    return root;

}

int main()
{
	int n;
	cin>>n;
	int pre_arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>pre_arr[i];
	}
	int m;
	cin>>m;
	int in_arr[m];
	for(int i=0;i<m;i++)
	{
		cin>>in_arr[i];
	}
    node *root = preToBST(pre_arr, in_arr, 0,n-1);
    PreorderPrint(root);
	return 0;
}
/*
Sample Input
3
1
2
3
3
3
2
1
*/