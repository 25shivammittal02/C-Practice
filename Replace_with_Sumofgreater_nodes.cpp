//https://online.codingblocks.com/player/26112/content/10191/5372

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

node *insertBST(node* root, int d)
{
	if(root==NULL)
	{
		node *n = new node(d);
		return n;
	}
	if(d<root->key)
	{
		root->left = insertBST(root->left, d);
		return root;
	}
	else
	{
		root->right = insertBST(root->right, d);
		return root;
	}
}

void PreorderPrint(node *root)
{
	if(root==NULL)
	{
		return ;
	}
	cout<<root->key<<" ";
	PreorderPrint(root->left);
	PreorderPrint(root->right);
}

node *balancedBST(int a[], int s, int e)
{
	if (s>e)
	{
		return NULL;
	}
	int mid = (s+e)/2;
	node *root = new node(a[mid]);
	root->left = balancedBST(a,s,mid-1);
	root->right = balancedBST(a,mid+1,e);
	return root;
}

int sum(node *root, int value, int s)
{
	if(root==NULL)
	{
		return s;
	}
	if(root->key >= value)
	{
		s+= root->key;
		cout<<"value of root->key = "<<root->key<<" Sum till now = "<<s<<endl;
	}
	s = sum(root->left, value, s);
	s = sum(root->right, value, s);
	return s;
}

void replaceBySum(node *root2, node *root, node *head)
{
	if(root==NULL)
	{
		return;
	}
	cout<<"old root2->key = "<<root2->key<<endl;
	root2->key = sum(head, root->key,0);
	cout<<"new root2->key = "<<root2->key<<endl;
	replaceBySum(root2->left, root->left, head);
	replaceBySum(root2->right, root->right, head);
	return;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	node *root = balancedBST(arr,0,n-1);
	node *root2 = balancedBST(arr,0,n-1);
	cout<<"Orginal BST (Pre-Order) -> ";
	PreorderPrint(root2);
	cout<<endl;
	replaceBySum(root2,root,root);
	PreorderPrint(root2);

	return 0;
}
/*
Sample Input
7
20 30 40 50 60 70 80 
*/