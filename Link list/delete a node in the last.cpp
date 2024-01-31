
#include <bits/stdc++.h>
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

    while (curr_node != NULL)
    {
        cout << curr_node->data << " ";
        curr_node = curr_node->next;
    }
    cout << endl;
}



void deleteLastNode()
{
    if (root == NULL)
    {
        cout << "List is empty. Cannot delete last node.\n";
        return;
    }

    node *current = root;
    node *previous = NULL;

    // current is now pointing to the last node
    // previous is pointing to the second-to-last node

    while (current->next != NULL)
    {
        previous = current;
        current = current->next;
    }



    if (previous != NULL)
    {
        // Update the next pointer of the second-to-last node to nullptr
        previous->next = NULL;
        delete current; // Free the memory of the last node
    }
    else
    {
        // If there is only one node in the list
        delete root;
        root = NULL;
    }
}

int main()
{
    int num;
    cout << "How many values do you insert in the list : ";
    cin >> num;

    root = new node;
    node *temp = root;

    cout << "Enter " << num << " values :";

    for (int i = 0; i < num; i++)
    {
        cin >> temp->data;

        if (i == (num - 1))
        {
            temp->next = NULL;
        }
        else
        {
            temp->next = new node;
            temp = temp->next;
        }
    }

    cout << "Original list:\n";
    printing();

    deleteLastNode();

    cout << "List after deleting the last node:\n";
    printing();

    return 0;
}
