#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;
};

void cycle_find(node* root) {
    int flag = 0;
    node* tortoise = root;
    node* hare = root;

    while (tortoise != nullptr && hare != nullptr && hare->next != nullptr) {
        tortoise = tortoise->next;
        hare = hare->next->next;

        if (tortoise == hare) {
            flag = 1;
            break;
        }
    }

    if (flag) {
        node* tortoise2 = root;
        while (tortoise != tortoise2) {
            tortoise = tortoise->next;
            tortoise2 = tortoise2->next;
        }
        cout << "Cycle detected at node with data: " << tortoise->data << endl;
    } else {
        cout << "No cycle found" << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    // Create nodes
    vector<node*> nodes(n);
    for (int i = 0; i < n; ++i) {
        nodes[i] = new node();
        cout << "Enter value for node " << i+1 << ": ";
        cin >> nodes[i]->data;
    }

    // Link nodes
    for (int i = 0; i < n - 1; ++i) {
        nodes[i]->next = nodes[i + 1];
    }

    // Ask for cycle presence
    char choice;
    cout << "Is there a cycle? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        int start;
        cout << "Enter the index of the starting node of the cycle (0-based): ";
        cin >> start;
        // Set up the cycle from the specified starting index
        nodes[n - 1]->next = nodes[start];
    }

    // Detect and find cycle
    cycle_find(nodes[0]);

    // Free memory
    for (int i = 0; i < n; ++i) {
        delete nodes[i];
    }

    return 0;
}

/*


#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

void cycle_find(node* root) {
    int flag = 0;
    node* tortoise = root;
    node* hare = root;

    while (tortoise != nullptr && hare != nullptr && hare->next != nullptr) {
        tortoise = tortoise->next;
        hare = hare->next->next;

        if (tortoise == hare) {
            flag = 1;
            break;
        }
    }

    if (flag) {
        node* tortoise2 = root;
        while (tortoise != tortoise2) {
            tortoise = tortoise->next;
            tortoise2 = tortoise2->next;
        }
        cout << "Cycle detected at node with data: " << tortoise->data << endl;
    } else {
        cout << "No cycle found" << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    // Create nodes
    node* head = nullptr;
    node* prev = nullptr;
    for (int i = 0; i < n; ++i) {
        node* new_node = new node();
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> new_node->data;
        new_node->next = nullptr;

        if (head == nullptr) {
            head = new_node;
        } else {
            prev->next = new_node;
        }
        prev = new_node;
    }

    // Ask for cycle presence
    char choice;
    cout << "Is there a cycle? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        int start;
        cout << "Enter the index of the starting node of the cycle (0-based): ";
        cin >> start;

        // Set up the cycle from the specified starting index
        node* current = head;
        for (int i = 0; i < start; ++i) {
            current = current->next;
        }
        prev->next = current;
    }

    // Detect and find cycle
    cycle_find(head);

    // Free memory
    node* current = head;
    while (current != nullptr) {
        node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}

*/
