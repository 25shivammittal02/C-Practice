#include <iostream>
using namespace std;

struct node
{
	int key;
	node *next;
	node *prev;
}*root= NULL;


void insert(node *newnode)
{
	if (root==NULL)
	{
		root=newnode;
	}
	
	else
	{
		node *ptr1 = root;
		while(ptr1->next!=NULL)
		{
			ptr1=ptr1->next;
		}
		ptr1->next=newnode;
		newnode->prev=ptr1;
		
	}
}

void print()
{
	node *ptr= root;
	while(ptr->next!=NULL)
	{
		cout<<ptr->key<<endl;
		ptr=ptr->next;
	}
	cout<<ptr->key;
	while(ptr->prev!=NULL)
	{
		cout<<ptr->key<<endl;
		ptr=ptr->prev;
	}
	cout<<ptr->key;
}

void insertatstart(node *newnode)
{
	newnode->next=root;
	newnode->prev=NULL;
	cout<<"Inserted at start"<<endl;
	root->prev = newnode;
	root=newnode;
}


void del(node *delnode)
{	
	node *deletednode = NULL;
	if (root->next==NULL)
	{
		deletednode=root;
		root =NULL;
		delete(deletednode);
		cout<<"the only node deleted"<<endl;
	}
	else if (delnode==root)
	{
		deletednode = root;
		root=root->next;
		root->prev=NULL;
		cout<<"root node deleted"<<endl;
		delete(deletednode);
	}
	else
	{
		node *ptr= root;
		node *pre=NULL;
		while(delnode->key!=ptr->key)
		{
			pre = ptr;
			ptr=ptr->next;
		}
		if(ptr->next==NULL)
		{
			deletednode = ptr;
			pre->next=NULL;
			deletednode->prev=NULL;
			deletednode->next=NULL;
			delete(deletednode);
			cout<<"removed from end"<<endl;
		}
		else
		{
			deletednode=ptr;
			deletednode->next->prev=pre;
			pre->next=deletednode->next;
			deletednode->prev=NULL;
			deletednode->next=NULL;
			delete(deletednode);
			cout<<"removed from middle"<<endl;
		}
	}
}

void removeduplicatesorted()
{
	int count=0;
	node *ptr2 = root;
	while(ptr2!=NULL)
	{
		int data = ptr2->key;
		node *ptr1 = ptr2->next;
		while(ptr1!=NULL)
		{
			if(data==ptr1->key)
			{
				node *nextnext = ptr1->next;
				del(ptr1);
				ptr1=nextnext;
				count++;
				cout<<count<<endl;
				cout<<"Duplicate removed"<<endl;
				print();
			}
			else
			{
				cout<<"else hi"<<endl;
				ptr1=ptr1->next;
			}
		}
		
		cout<<"ghjk"<<endl;
		print();
		ptr2=ptr2->next;
		cout<<"ptr = "<<ptr2->key<<endl;
		cout<<"incresed"<<endl;
	}
	cout<<"out from while loop"<<endl;
	if(count==0)
	{
		cout<<"No duplicates found"<<endl;
	}
	else
	{
		cout<<"All duplicates removed"<<endl;
	}
	
}

int main()
{
	node *ptr;
	for(int i=0;i<5;i++)
	{
		int data =0;
		cin>>data;
		ptr = new node;
		ptr->key=data;
		ptr->next=NULL;
		ptr->prev=NULL;
		insert(ptr);
		cout<<"inserted"<<endl;
	}
print();

 removeduplicatesorted();
 print();
 

return 0;
}
