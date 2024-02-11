#include<bits/stdc++.h>
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
    // Create nodes
    node* head = new node();
    node* second = new node();
    node* third = new node();
    node* fourth = new node();
    node* fifth = new node();

    // Assign data values
    head->data = 1;
    second->data = 2;
    third->data = 3;
    fourth->data = 4;
    fifth->data = 5;

    // Create cycle
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = second; // cycle back to second

    // Detect and find cycle
    cycle_find(head);

    // Free memory
    delete head;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}

/*

 +------+-------+        +------+------+       +------+------+      +------+------+       +------+------+
 | Data |  P    |  -->   | Data | Q    |  -->  | Data | R    | -->  | Data |   S  |  -->  | Data |   Q  |
 +------+-------+        +------+------+       +------+------+      +------+------+       +------+------+
        M                       P                     Q                    R                     S


*/

