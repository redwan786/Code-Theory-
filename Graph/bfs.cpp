#include<bits/stdc++.h>
using namespace std;

// Structure to represent a graph node
struct Node {
    vector<int> neighbors; // Store indices of neighboring nodes
    bool visited = false;  // Keeps track of visited nodes for BFS
};

// Global vector to store the graph
vector<Node> Node_Vec;

// Function to perform Breadth-First Search (BFS) on the graph
void BFS(int starting_node) {
    // Queue to store nodes to explore
    queue<int> Q;

    // Mark starting node as visited
    Node_Vec[starting_node].visited = true;

    // Enqueue starting node
    Q.push(starting_node);

    while (!Q.empty()) {
        // Dequeue the current node
        int u = Q.front();
        Q.pop();

        // Visit current node (you can add processing here if needed)
        cout << u << " ";

        // Explore unvisited neighbors
        for (int v : Node_Vec[u].neighbors) {
            if (!Node_Vec[v].visited) {
                Node_Vec[v].visited = true;
                Q.push(v);
            }
        }
    }
}

int main() {
    // Input number of nodes and edges
    int node_no, edge_no;
    cout << "Enter the number of nodes: ";
    cin >> node_no;
    cout << "Enter the number of edges: ";
    cin >> edge_no;

    // Initialize Node_Vec with appropriate capacities
    Node_Vec.resize(node_no);

    // Input edges
    for (int i = 0; i < edge_no; i++) {
        int nodeA, nodeB;
        cout << "Enter nodes for edge " << i + 1 << ": ";
        cin >> nodeA >> nodeB;

        // Add edges for undirected graph
        Node_Vec[nodeA].neighbors.push_back(nodeB);
        Node_Vec[nodeB].neighbors.push_back(nodeA);
    }

    // Input starting node for BFS
    int starting_node;
    cout << "Enter the starting node for BFS: ";
    cin >> starting_node;

    // Perform BFS starting from the given node
    cout << "BFS traversal starting from node " << starting_node << ": ";
    BFS(starting_node);
    cout << endl;

    return 0;
}

