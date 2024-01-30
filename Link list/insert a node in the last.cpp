
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

void insertAtBeginning(int value)
{
    node *newNode = new node();  // Create a new node
    newNode->data = value;       // Set its data

    newNode->next = NULL;        // Last node bole NULL hoiche

    node *tem = root;      // To traverse the list
    while(tem->next != NULL){
        tem = tem->next;
    }
    tem->next =newNode;


}

int main()
{
    int num;
    cout << "How many values do you insert in the list : ";
    cin >> num;

    node *p_i = new node[num];  // Allocate memory for all nodes

    // Initialize root to point to the first node
    root = &p_i[0];

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
            temp->next = &p_i[i + 1];  // Use the next allocated node
            temp = temp->next;
        }
    }
    printing();

    cout << "Enter value to insert at the beginning: ";
    int valueToInsert;
    cin >> valueToInsert;

    insertAtBeginning(valueToInsert);

    cout << "Updated list after inserting at the last:\n";
    printing();



    return 0;
}
