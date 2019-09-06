//https://practice.geeksforgeeks.org/problems/delete-nodes-having-greater-value-on-right/1/?ref=self
#include<bits/stdc++.h>
using namespace std;
struct Node
{
int data;
Node* next;
};
Node *newNode(int data)
{
    Node *new_node = new Node;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
void print(Node *root)
{
Node *temp = root;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}
Node *compute(Node *head);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int K;
        cin>>K;
        struct Node *head = NULL;
        struct Node *temp = head;
        for(int i=0;i<K;i++){
        int data;
        cin>>data;
            if(head==NULL)
            head=temp=newNode(data);
            else
            {
                temp->next = newNode(data);
                temp=temp->next;
            }
        }
        Node *result = compute(head);
        print(result);
        cout<<endl;
    }
}

Node *compute(Node *head)
{
    Node *ptr = head;
    Node *prev = NULL;
    while(ptr->next!=NULL)
    {
        // cout<<"Ptr = "<<ptr->data<<endl;
        bool del = 0;
        Node *temp = ptr->next;
        // cout<<"Temp = "<<temp->data<<endl;
        while(temp!=NULL)
        {
            if(temp->data > ptr->data and ptr!=head)
            {
                // cout<<"temp->data > ptr->data and ptr!=head"<<endl;
                // cout<<"Ptr = "<<ptr->data<<endl;
                // cout<<"Temp = "<<temp->data<<endl;
                // cout<<"prev = "<<prev->data<<endl;
                del =1;
                prev->next = ptr->next;
                ptr->next = NULL;
                ptr = prev;
                // cout<<"Final Values"<<endl;
                // cout<<"Ptr = "<<ptr->data<<endl;
                // cout<<"Temp = "<<temp->data<<endl;
                // cout<<"prev = "<<prev->data<<endl;
                break;
            }
            else if(temp->data > ptr->data and ptr==head)
            {
                // cout<<"temp->data > ptr->data and ptr==head"<<endl;
                // cout<<"Ptr = "<<ptr->data<<endl;
                // cout<<"Temp = "<<temp->data<<endl;
                // cout<<"prev = "<<prev->data<<endl;
                del=1;
                head = ptr->next;
                ptr->next = NULL;
                ptr = head;
                // cout<<"Final Values"<<endl;
                // cout<<"Ptr = "<<ptr->data<<endl;
                // cout<<"Temp = "<<temp->data<<endl;
                //cout<<"prev = "<<prev->data<<endl;
                break;
            }
            else
            {
                // cout<<"Else loop "<<endl;
                // cout<<"Temp = "<<temp->data<<endl;
                temp = temp->next;
                // if(temp!=NULL)
                    // cout<<"Temp = "<<temp->data<<endl;
            }
            // cout<<"Del = "<<del<<endl;
        }
        if(del ==0)
        {
            // cout<<"Found Nothing"<<endl;
            prev = ptr;
            ptr= ptr->next;
        }
    }
    // cout<<"CASE COMPLETE"<<endl;
    return head;
}