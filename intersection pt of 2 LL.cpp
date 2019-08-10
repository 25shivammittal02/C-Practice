#include<iostream>
#include<stdio.h>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
int intersectPoint(struct Node* head1, struct Node* head2);
void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node(new_data);
    if (*head_ref == NULL)
        *head_ref = new_node;
    else
        (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}
/* Driver program to test above function*/
int main()
{
    int T,i,n1, n2, n3,l,k;
    cin>>T;
    while(T--)
    {
        cin>>n1>>n2>>n3;
        struct Node *head1 = NULL,  *tail1 = NULL;
        for(i=1; i<=n1; i++)
        {
            cin>>l;
            append(&head1, &tail1, l);
        }
        struct Node *head2 = NULL,  *tail2 = NULL;
        for(i=1; i<=n2; i++)
        {
            cin>>l;
            append(&head2, &tail2, l);
        }
        struct Node *head3 = NULL,  *tail3 = NULL;
        for(i=1; i<=n3; i++)
        {
            cin>>l;
            append(&head3, &tail3, l);
        }
        if (tail1 != NULL)
        tail1->next = head3;
        if (tail2 != NULL)
        tail2->next = head3;
        cout <<"data of intersection = " <<intersectPoint(head1, head2) << endl;
    }
    return 0;
}

int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Node *ptr1 = head1;
    Node *ptr2 = head2;
    int l1=1,l2=1;
    while(ptr1->next!=NULL)
    {
        l1++;
        ptr1 = ptr1->next;
    }
    while(ptr2->next!=NULL)
    {
        l2++;
        ptr2 = ptr2->next;
    }
    if(l1>l2)
    {
        ptr2=head2;
        int l = l1-l2;
        ptr1 = head1;
        int l3= 1;
        while(l3<=l)
        {
            ptr1 = ptr1->next;
            l3++;
        }
    }
    else
    {
        ptr1 = head1;
        int l = l2-l1;
        ptr2 = head2;
        int l3= 1;
        while(l3<=l)
        {
            ptr2 = ptr2->next;
            l3++;
        }
    }
    while(ptr1!=ptr2)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return ptr1->data;
    
}

/*
2
2 3 2
10 20
30 40 50
5 10
2 3 2
10 20
30 40 50
10 20



*/