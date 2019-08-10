#include<iostream>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node(new_data);
    
    if (*head_ref == NULL)
        *head_ref = new_node;
    else
        (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}

void printList(struct Node *n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

Node* sortedMerge(Node* head1,   Node* head2)
{
    Node *ptr = NULL;
    Node *head = NULL;

    while(head1 and head2)
    {
        if(head1->data < head2->data)
        {
            if(head == NULL)
            {
                head = head1;
                ptr = head1;
                head1 = head1->next;
            }
            else
            {
                ptr->next = head1;
                ptr = ptr->next;
                head1 = head1->next;
            }
        }
        else
        {
            if(head == NULL)
            {
                head = head2;
                ptr = head2;
                head2 = head2->next;
            }
            else
            {
                ptr->next = head2;
                ptr = ptr->next;
                head2 = head2->next;
            }
        }
    }

    while(head1)
    {
        ptr->next = head1;
        ptr = ptr->next;
        head1 = head1->next;
    }
    while(head2)
    {
        ptr->next = head2;
        ptr = ptr->next;
        head2 = head2->next;
    }
    return head;
}

int main()
{
    int T,i,n1,n2,l,k;
    cin>>T;
    while(T--)
    {
        struct Node *head1 = NULL,  *tail1 = NULL;
        struct Node *head2 = NULL,  *tail2 = NULL;
        cin>>n1>>n2;
        for(i=1; i<=n1; i++)
        {
            cin>>l;
            append(&head1, &tail1, l);
        }
        for(i=1; i<=n2; i++)
        {
            cin>>l;
            append(&head2, &tail2, l);
        }
        Node *head = sortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}

/*

2
4 3
5 10 15 40 
2 3 20
2 2
1 1
2 4

*/