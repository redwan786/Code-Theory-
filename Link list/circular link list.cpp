#include<bits/stdc++.h>
using namespace std;

// Define a structure for a node in the linked list
struct node
{
    int data;
    node *next;
};

// Declare a global variable root which points to the first node in the list
node *root = NULL;

// Function to print the data of each node in the linked list
void printing()
{
    node *curr_node = root;

    do
    {
        cout << curr_node->data << endl;
        curr_node = curr_node->next;
    } while (curr_node != NULL && curr_node != root);
}


int main()
{
    // Declare four pointers p, q, r, and s to nodes
    node *p, *q, *r, *s;

    // Allocate memory for each node
    p = new node();
    q = new node();
    r = new node();
    s = new node();

    // Assign data values to each node
    p -> data = 3;
    q -> data = 8;
    r -> data = 10;
    s -> data = 12;

    // Connect nodes to form a circular linked list
    p -> next = q;
    q -> next = r;
    r -> next = s;
    s -> next = p;

    // Set the root pointer to the first node in the list
    root = p;

    // Call the printing function to display the data of each node
    printing();

    // Free the allocated memory for nodes
    delete p;
    delete q;
    delete r;
    delete s;

    return 0;
}
