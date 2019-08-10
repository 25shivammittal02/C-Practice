//https://practice.geeksforgeeks.org/problems/remove-duplicate-element-from-sorted-linked-list/1/?ref=self
#include <bits/stdc++.h>
using namespace std;
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
void print(Node *root)
{
Node *temp = root;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}
Node* removeDuplicates(Node *root);
int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
		int K;
		cin>>K;
		Node *head = NULL;
                Node *temp = head;
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		Node *result  = removeDuplicates(head);
		print(result);
		cout<<endl;
	}
	return 0;
}

Node *removeDuplicates(Node *root)
{
 Node *ptr = root;
 Node *prev = root;
 while(ptr->next!=NULL)
 {
     while(ptr->data == prev->data)
     {
         if(ptr->next==NULL)
         {
            ptr = NULL;
            break;
         }
         else
         {
            ptr = ptr->next;             
         }
     }
     prev->next = ptr;
     if(ptr==NULL)
     {
         break;
     }
     prev = prev->next;
 }
 return root;
}