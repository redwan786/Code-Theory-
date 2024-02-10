#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *root = NULL;

void deleteAtPosition(int position)
{
    if (position == 0)
    {
        node *temp = root;
        root = root->next;
        delete temp;
    }
    else
    {
        node *temp = root;
        for (int i = 0; i < position - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }
        

        node *toDelete = temp->next;
        temp->next = toDelete->next;
        delete toDelete;
    }
}

void printing()
{
    node *temp = root;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
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

    deleteAtPosition(positionToDelete);

    cout << "List after deleting the node at position " << positionToDelete << ":\n";
    printing();

    return 0;
}
