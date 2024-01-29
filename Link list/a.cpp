#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *root = NULL;

void find_length()
{
    int length_count =0;
    node *curr_node=root;
    while(curr_node->next!=NULL)
    {
        curr_node=curr_node->next;
        length_count++;
    }
    cout << "Length of the singly linked list is : "<<length_count+1;

}


int main()
{
    node *p, *q, *r, *s;
    p = new node();
    q = new node();
    r = new node();
    s = new node();

    cout << "data :";
    node *temp=p;
    for(int i = 0; i<4;i++){
        cin >> temp->data;
        temp = temp->next;

    }
   /* p->data=3;
    q->data=8;
    r->data=10;
    s->data=12;*/

    p->next=q;
    q->next=r;
    r->next=s;
    s->next=NULL;

    root=p;

    find_length();


}

