//https://practice.geeksforgeeks.org/problems/reorder-list/1

{
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* Linked list Node */
struct Node
{
    int data;
    struct Node* next;
};
 void reorderList(struct Node* head) ;
/* Function to create a new Node with given data */
struct Node *newNode(int data)
{
    struct Node *new_Node = (struct Node *) malloc(sizeof(struct Node));
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}
void printList(struct Node *Node)
{
    while(Node != NULL)
    {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("
");
}
void freeList(struct Node *head)
{
	struct Node* temp;
    while(head != NULL)
    {
        
        temp=head;
        head = head->next;
        free(temp);
    }
  
}
int main(void)
{
   int t,n,m,i,x;
   cin>>t;
   while(t--)
   {
	   struct Node* temp,*head;
	    cin>>n;
	    cin>>x;
	    head=newNode(x);
	    temp=head;
	    for(i=0;i<n-1;i++)
	    {
			cin>>x;
			temp->next=newNode(x);
			temp=temp->next;
			}
	   
		reorderList(head);
	    printList(head);
freeList(head);
   }
   return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
/* Following is the Linked list node structure */
/*struct Node
{
    int data;
    Node* next;
};*/
Node* helper(Node*head,int n,int pos=0,Node*prev=NULL)
{
    if(pos==((n-1)/2))
    {
        
        if(n&1)
        {
            if(prev!=NULL) prev->next=head->next;
            head->next=NULL;
        }
        else
        {
            if(prev!=NULL)prev->next=head->next->next;
            head->next->next=NULL;    
        }
        
        return head;
        
    }
    Node* temp=helper(head->next,n,pos+1,head);
    if(prev!=NULL)
    {
        prev->next=head->next->next;    
    }
    
    head->next->next=temp;
    return head;
}

void reorderList(Node* head) 
{   int count=1;
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
        count++;
    }
    head=helper(head,count);
    
}

/*

2
3
1 2 3
4
1 7 3 4

*/