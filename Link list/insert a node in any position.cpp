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
        cout << curr_node -> data << " ";
        curr_node = curr_node ->next;
    }
    cout << endl;
}

void insertAtPosition(int position, int value)
{
    node *newNode = new node();  // Create a new node
    newNode->data = value;       // Set its data

        // Insert at a specific position
        node *temp = root;
        for (int i = 0; i < position - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;

}

int main()
{
    int num;
    cout << "How many values do you insert in the list : ";
    cin >> num;

    node *p = new node[num];  // Allocate memory for all nodes

    // Initialize root to point to the first node
    root = &p[0];

    cout << "Enter " << num << " values :";

    node *temp = root; // To traverse the list

    for(int i = 0; i < num; i++)
    {
        cin >> temp->data;

        if(i == (num-1))
        {
            temp->next = NULL;
        }
        else
        {
            temp->next = &p[i + 1];  // Use the next allocated node
            temp = temp->next;
        }
    }

    printing();

    int position, valueToInsert;
    cout << "Enter position to insert: ";
    cin >> position;

    cout << "Enter value to insert at position " << position << ": ";
    cin >> valueToInsert;

    insertAtPosition(position, valueToInsert);

    cout << "Updated list after inserting at position " << position << ":\n";
    printing();

    return 0;
}
