#include<bits/stdc++.h>
using namespace std;

int main()
{

    struct node{
        int data;
        node *next;
    };

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
    s -> next = NULL;





    return 0;

}

