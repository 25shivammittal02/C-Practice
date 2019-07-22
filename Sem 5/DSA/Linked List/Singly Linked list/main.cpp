#include <iostream>
using namespace std;

struct node
{
	int key;
	node *next;
}*root= NULL;

void insert ( node *newnode)
{
	if(root==NULL)
	root=newnode;
	
	else
	{
		node *ptr=NULL;
		ptr=root;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next = newnode;
	}
}

void print ()
{
	node *ptr= NULL;
	ptr=root;
	while(ptr->next!=NULL)
	{
		cout<<ptr->key<<endl;
		ptr=ptr->next;
	}
	cout<<ptr->key;
}

void delet(int data)
{
	int del;
	del=data;
	
	if(del==root->key)
	{
		node *deletednode = root;
		root= root->next;
		deletednode->next = NULL;
	}
	
	else
	{
	
	node *temp = NULL;
	node *prev = NULL;
	temp = root;
	while(temp->key!=del)
	{
		prev = temp;
		temp = temp->next;
		
	}
	
	prev->next = temp->next;
	temp->next = NULL;
	}
	
	print();
}

void getnthfromend(int a)
{
	node *main, *ref;
	main = ref = root;
	int count=1;
	while(count!=a)
	{
		ref=ref->next;
		count++;
	}
	
	while(ref->next!=NULL)
	{
		ref=ref->next;
		main=main->next;
	}
	cout<<main->key;
}

void middle()
{
	node *main, *ref;
	main = ref = root;
	while(ref->next!=NULL && ref!=NULL)
	{
		ref=ref->next->next;
		main=main->next;
	}
	cout<<main->key;
}

node *findloop()
{
	node *main, *ref;
	main = root;
	ref= root->next;
	while(ref!=main && ref!=NULL && ref->next!=NULL)
	{
		ref=ref->next->next;
		main=main->next;
	}
	if(main==ref)
	{
		cout<<"loop found"<<endl;
	}
	else
	{
		cout<<"loop not found"<<endl;
	}
	
	return ref;
}



int getcount(node *h)
	{	int c;
		if (h==NULL)
			return 0;
		else
		{
			int cnt=1;
			node *temp = h;
			while(1)
			{
				temp = temp->next;
				if(temp==h)
				break;
				cnt++;
			}
			return cnt;
		}
		
			
	}


node *removeloop(int b)
	{
		int ct = 1;
		node *head = root;
		node *last= head->next;
		int count=b;
		while(ct!=count)
		{
			last=last->next;
			ct++;	
		}
		node *prev = NULL;
		while(last!=head)
		{	prev=last;
			head=head->next;
			last=last->next;
			
		}
		
		prev->next=NULL;
		cout<<"loop removed"<<endl;
	}
int main() {
	
	node *ptr;
	for(int i =0; i<5; i++)
	{
		int data =0;
		cin>>data;
		ptr = new node;
		ptr->key = data;
		ptr->next=NULL;
		insert (ptr);
		cout<<"inserted"<<endl;
		
	}
	
	print();


node *nxt=NULL, *prev=NULL, *current=root;
	while(current!=NULL)
	{
		nxt=current->next;
		current->next=prev;
		prev=current;
		current=nxt;
	}
	root=prev;
	print();


return 0;        
}

