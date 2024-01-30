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

    return 0;
}
