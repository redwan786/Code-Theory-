
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *root = NULL;

void last_node_value()
{
    node *curr_node=root;
    while(curr_node->next!=NULL)
    {
        curr_node=curr_node->next;

    }
    cout << "Last node value of the singly linked list is : "<<curr_node->data;

}


int main()
{
    node *p, *q, *r, *s;
    p = new node();
    q = new node();
    r = new node();
    s = new node();

    p->data=3;
    q->data=8;
    r->data=10;
    s->data=12;

    p->next=q;
    q->next=r;
    r->next=s;
    s->next=NULL;

    root=p;

    last_node_value();


}
