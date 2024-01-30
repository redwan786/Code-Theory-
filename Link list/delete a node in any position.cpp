#include <iostream>
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

void deleteNodeAtPosition(int position)
{
    if (root == NULL || position <= 0)
    {
        cout << "Invalid position. Cannot delete node.\n";
        return;
    }

    // If the node to delete is the first node
    if (position == 1)
    {
        node *temp = root;
        root = root->next;
        delete temp; // Free the memory of the deleted node
        return;
    }

    int currentPosition = 1;
    node *current = root;
    node *previous = NULL;

    // Traverse the list to find the node at the specified position
    while (current != NULL && currentPosition < position)
    {
        previous = current;
        current = current->next;
        currentPosition++;
    }

    if (current == NULL)
    {
        cout << "Invalid position. Cannot delete node.\n";
        return;
    }

    // Adjust pointers to skip the node to be deleted
    previous->next = current->next;

    delete current; // Free the memory of the deleted node
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

    int positionToDelete;
    cout << "Enter the position of the node to delete: ";
    cin >> positionToDelete;

    deleteNodeAtPosition(positionToDelete);

    cout << "List after deleting the node at position " << positionToDelete << ":\n";
    printing();



    return 0;
}
