
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *root = NULL;

void printing()
{
    node *curr_node = root;

    while(curr_node != NULL)
    {
        cout << curr_node -> data << endl;
        curr_node = curr_node ->next;
    }
}

int main()
{
    node *p, *q, *r, *s;

    p = new node();
    q = new node();
    r = new node();
    s = new node();

    p -> data = 3;
    q -> data = 8;
    r -> data = 10;
    s -> data = 12;
    p -> next = q;
    q -> next = r;
    r -> next = s;
    s -> next = p;

    root = p;
    printing();

    return 0;

}


