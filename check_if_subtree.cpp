//https://practice.geeksforgeeks.org/problems/check-if-subtree/1

#include <cstring>
#include <iostream>
#include <map>
using namespace std;
#define MAX 1000
// Structure of a tree node
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
bool isSubtree(Node *T, Node *S);
void storeInorder(Node *, char[], int &);
void storePreOrder(Node *, char[], int &);
// Driver program to test above function
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        struct Node *child = NULL;
        map<int, Node *> m;
        int n;
        scanf(" %d
", &n);
        struct Node *t2 = NULL;
        while (n--) {
            Node *parent;
            char lr;
            int n1, n2;
            scanf("%d %d %c", &n1, &n2, &lr);
            if (m.find(n1) == m.end()) {
                parent = new Node(n1);
                m[n1] = parent;
                if (t2 == NULL) t2 = parent;
            } else
                parent = m[n1];
            child = new Node(n2);
            if (lr == 'L')
                parent->left = child;
            else
                parent->right = child;
            m[n2] = child;
        }
        struct Node *child1;
        map<int, Node *> m1;
        int nodes;
        scanf("%d
", &nodes);
        struct Node *t1 = NULL;
        while (nodes--) {
            Node *parent1;
            char lr1;
            int n3, n4;
            scanf("%d %d %c", &n3, &n4, &lr1);
            if (m1.find(n3) == m1.end()) {
                parent1 = new Node(n3);
                m1[n3] = parent1;
                if (t1 == NULL) t1 = parent1;
            } else
                parent1 = m1[n3];
            child = new Node(n4);
            if (lr1 == 'L')
                parent1->left = child;
            else
                parent1->right = child;
            m1[n4] = child;
        }
        cout << isSubtree(t1, t2);
        cout << endl;
    }
}

bool IsIdentical(Node* a, Node* b)
{
    if(a==NULL && b==NULL)
    {
        return 1;
    }
    if(a==NULL || b==NULL)
    {
        return 0;
    }
    return (a->data==b->data && IsIdentical(a->left,b->left) && IsIdentical(a->right,b->right));
}

bool isSubtree(Node* t1, Node* t2) 
{
    if(t2==NULL)
    {
        return 1;
    }
    if(t1==NULL)
    {
        return 0;
    }
    if(IsIdentical(t1,t2)==1)
    {
        return 1;
    }
    return IsIdentical(t1->left,t2) || IsIdentical(t1->right,t2);
}

/*
Sample Input:
3
1
3 4 L
3
1 2 L 1 3 R 3 4 L
5
26 10 L 10 20 L 10 30 R 20 40 L 20 60 R
5
26 10 L 10 20 L 10 30 R 20 40 L 20 60 R
3
10 4 L 10 6 R 4 30 R
6
26 10 L 26 3 R 10 4 L 10 6 R 6 25 R 3 3 R

Output:
1
1
0
*/