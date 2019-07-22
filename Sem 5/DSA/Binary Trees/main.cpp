#include<iostream>
#include<string.h>
#include <bits/stdc++.h>
#include<stdlib.h>
using namespace std;


struct node
{
	int key;
	node *left;
	node *right;
}*root=NULL;

node *insert(node *rootnode , int data)
{
	if(rootnode==NULL)
	{
		node *newnode = new node;
		newnode->key=data;
		newnode->left=NULL;
		newnode->right=NULL;
		return newnode;
	}
	else
	{
		if(data>rootnode->key)
		{
			rootnode->right= insert(rootnode->right, data);
		}
		else
		{
			rootnode->left=insert(rootnode->left, data);
		}
		return rootnode;
	}
}

void Preorder(node *root)
{
	if (root == NULL)
		return;
	cout<<root->key<<endl;
	Preorder(root->left);
	Preorder(root->right);	
	
	
}

void Inorder(node *node)
{
	if (node==NULL)
		return;
	Inorder(node->left);
	cout<<node->key<<endl;
	Inorder(node->right);
	
}

void Postorder(node *node)
{
	if (node==NULL)
		return;
	Postorder(node->left);
	Postorder(node->right);
	cout<<node->key<<endl;
	
}
int flag =0;
node *search(node *rootnode, int data)
{
	
	if (rootnode==NULL)
	{
		//cout<<"Not found"<<endl;
		return rootnode;
	}
	else
	{
		if(data==rootnode->key)
		{	
			
			flag++;
			//cout<<"Found"<<endl;
			return rootnode;
		}
		else if (data > rootnode->key)
		{
			search(rootnode->right , data);
		}
		else if (data < rootnode->key)
		{
			search(rootnode->left ,data);
		}
		
	}	
}

node *FindMin(node *startnode)
{
	if (startnode->left == NULL)
	{
		return startnode;
	}
	else
	{
		return FindMin(startnode->left);
		
	}
}

node *deletion_BST(node *del , int data)
{
	if (root==NULL)
	{	
		cout<<"Empty tree"<<endl;
		return root;
	}
	
	if (data<del->key)
	{
		del->left=deletion_BST(del->left , data);
	}
	else if (data>del->key)
	{
		del->right=deletion_BST(del->right , data);
	}
	else
	{
		if(del->left==NULL && del->right==NULL)
		{
			node *deletednode= del;
			delete(deletednode);
			del=NULL;
			cout<<"deleted1"<<endl;
			return del;
		}
		if (del->right==NULL)
		{
			node *deletednode = del->left;
			delete(del);
			cout<<"deleted2"<<endl;
			return deletednode;
		}
		else if (del->left==NULL)
		{
			node *deletednode = del->right;
			delete(del);
			cout<<"deleted3"<<endl;
			return deletednode;
		}
		else
		{
			node *temp = FindMin(del->right);
			del->key = temp->key;
			del->right=deletion_BST(del->right , temp->key);
			cout<<"deleted4"<<endl;
			return del;
		}
	}
}

int Mindepth(node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	
	if(root->left==NULL && root->right==NULL)
	{
		return 1;
	}
	if(root->left==NULL)
	{
		return Mindepth(root->right) + 1;
	}
	if(root->right==NULL)
	{
		return Mindepth(root->left) + 1;
	}
	return min (Mindepth(root->left) , Mindepth(root->right)) +1;
}

int No_Of_Digits(int a)
{	int count =0;
	while(a!=0)
	{
		a=a/10;
		count++;
	}
	return count;
}



int main()
{
/*	for(int i=0;i<5;i++)
	{
		int data;
		cin>>data;
		root = insert(root , data);
		cout<<"inserted"<<endl;
	}
cout<<"Root->Key = "<<root->key<<endl;	
Preorder(root);
cout<<endl;
/*Inorder(root);
cout<<endl;
Postorder(root);
*/

/*search(root , Data);

if(flag==0)
{
	cout<<"Not found"<<endl;
}
else
{
	cout<<"Found"<<endl;
}


node *Min = FindMin(root);
cout<<"Min element = "<<Min->key;

int Data;
cout<<"Enter element to delete"<<endl;
cin>>Data;

deletion_BST(root , Data);
Inorder(root);
int dept = Mindepth(root);
cout<<dept;*/



/*
string str1("shivam mittal");
cout<<str1.length()<<endl;
str1.append(" is a good boy.");
cout<<str1;
int len = str1.length();
char ch[len];
for(int i=0;i<len;i++)
{
	ch[i]=str1.at(i);
}
for(int i=0;i<len;i++)
{
	cout<<ch[i]<<endl;
}

int ascii[len];
for(int i=0;i<len;i++)
{
	ascii[i]=ch[i];
}

for(int i=0;i<len;i++)
{
	cout<<ascii[i]<<"  "<<endl;
}
*/
//cout<<hex<<116;

int ar[5]={15,12,10,2,23};
/*int sum = 25;
int counter =0;
for(int i=0;i<4;i++)
{
	int pivot = ar[i];
	{
		for(int j=i+1; j<5;j++)
		{
			if (ar[i]+ar[j]==sum)
			{
			counter++;
			cout<<"("<<ar[i]<<","<<ar[j]<<")"<<endl;
			}
		}
	}
}

if (counter==0 )
{
	cout<<"no pairs found";
}
*/


	int temp=ar[4];
	for(int i=3;i>=0;i--)
	{
		ar[i+1]=ar[i];
			
	}
	
	ar[0]=temp;
	
	for(int i=0;i<5;i++)
	{
		cout<<ar[i]<<" ";
	}
	
	cout<<endl;




return 0;
}
