#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

void cycle_find(node* root) {
    int flag = 0;
    node *tortoise = root;
    node *hare = root;

    while (tortoise != nullptr && hare != nullptr && hare->next != nullptr) {
        tortoise = tortoise->next;
        hare = hare->next->next;

        if (tortoise == hare) {
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        cout << "No cycle found" << endl;
        return;
    }

    tortoise = root;
    while (tortoise != hare) {
        tortoise = tortoise->next;
        hare = hare->next;
    }

    cout << "Node where cycle starts: " << tortoise->data << endl; // Ensure output is flushed
}

int main() {
    int num;
    cout << "How many values do you want to insert in the list: ";
    cin >> num;

    node *root = nullptr;
    node *temp = nullptr;

    // Create the linked list
    for(int i = 0; i < num; i++) {
        int value;
        cout << "Enter value " << i+1 << ": ";
        cin >> value;

        if (root == nullptr) {
            root = new node{value, nullptr};
            temp = root;
        } else {
            temp->next = new node{value, nullptr};
            temp = temp->next;
        }
    }

    char choice;
    cout << "Do you want to create a cycle in the list? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        int cycle_start_index;
        cout << "Enter the index (0-based) of the node where you want the cycle to start: ";
        cin >> cycle_start_index;

        // Find the node at the specified index
        temp = root;
        for (int i = 0; i < cycle_start_index && temp != nullptr; i++) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Error: Node at the specified index not found." << endl;
        } else {
            // Create the cycle
            node* cycle_node = temp;
            while (cycle_node->next != nullptr) {
                cycle_node = cycle_node->next;
            }
            cycle_node->next = temp;
        }
    }

    // Detect and print the node where the cycle starts, if it exists
    cycle_find(root);

    // Clean up allocated memory
    while (root != nullptr) {
        temp = root;
        root = root->next;
        delete temp;
    }

    return 0;
}
