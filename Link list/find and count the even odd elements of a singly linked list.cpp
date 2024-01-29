#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *root = NULL;

void find_even_odd()
{
    node *curr_node=root;

    cout << "Even elements are: ";
    while(curr_node!=NULL)
    {
        if((curr_node->data)%2 == 0)
        {
            cout << curr_node->data << " ";
        }
        curr_node=curr_node->next;
    }

    curr_node=root;
    cout << endl <<"Odd elements are: ";
    while(curr_node!=NULL)
    {
        if((curr_node->data)%2 != 0)
        {
            cout << curr_node->data << " ";
        }
        curr_node=curr_node->next;
    }


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

    find_even_odd();


}

