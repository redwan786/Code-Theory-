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
    cout<< endl;
}

void deleteFirstNode()
{
    if (root == NULL)
    {
        cout << "List is already empty. Cannot delete first node.\n";
        return;
    }

    node *temp = root;
    root = root->next;

    delete temp;  // Free the memory of the deleted node
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

    cout << "Original list:\n";
    printing();

    deleteFirstNode();

    cout << "List after deleting the first node:\n";
    printing();


    return 0;
}
