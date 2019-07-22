#include <iostream>
using namespace std;

struct node
{
	int key;
	node *next;
}*root= NULL;


void insert(node *newnode)
{
	if (root==NULL)
	{
		root=newnode;
		newnode->next=newnode;
	}
	
	else
	{
		node *ptr = root;
		while(ptr->next!=root)
		{
			ptr=ptr->next;
		}
		ptr->next=newnode;
		
	}
}

void print()
{
	node *ptr= root;
	while(ptr->next!=root)
	{
		cout<<ptr->key<<endl;
		ptr=ptr->next;
	}
	cout<<ptr->key;
}

void insertinmid(int nod, int data)
{
	node *ptr = root;
	while(ptr->key!=nod)
	{
		ptr=ptr->next;
	}
	node *nnode = new node;
	nnode->key=data;
	nnode->next = ptr->next;
	ptr->next=nnode;
}


void countnodes()
{
	node *ptr = root;
	int count =1;
	while(ptr->next!=root)
	{
		ptr=ptr->next;
		count++;
	}
	cout<<count;
}

int main()
{
	node *last;
	for(int i=0;i<5;i++)
	{
		int data =0;
		cin>>data;
		last = new node;
		last->key=data;
		last->next=root;
		insert(last);
		cout<<"inserted"<<endl;
	}
	
print();
countnodes();
return 0;
}
