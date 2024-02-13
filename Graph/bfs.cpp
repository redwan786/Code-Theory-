#include<bits/stdc++.h>
using namespace std;

// Defining a structure to represent a node in a graph
struct Node
{
    vector<int> neighbors; // List of neighboring nodes
    bool visited = false; // Indicates whether the node has been visited during traversal
};

vector<Node> Node_Vec; // Vector to store nodes of the graph

// Function to perform Breadth First Search (BFS) traversal on the graph
void BFS(int starting_node)
{
    queue<int> Q; // Queue to store nodes to be visited
    Node_Vec[starting_node].visited = true; // Mark the starting node as visited
    Q.push(starting_node); // Add the starting node to the queue

    // Continue traversal until all reachable nodes are visited
    while (!Q.empty())
    {
        int u = Q.front(); // Get the front element of the queue
        Q.pop(); // Remove the front element from the queue
        cout << u << " "; // Print the current node

        // Traverse through the neighbors of the current node
        for (int i = 0; i < Node_Vec[u].neighbors.size(); ++i)
        {
            int v = Node_Vec[u].neighbors[i];
            // If the neighbor has not been visited yet
            if (!Node_Vec[v].visited)
            {
                Node_Vec[v].visited = true; // Mark the neighbor as visited
                Q.push(v); // Add the neighbor to the queue for further traversal
            }
        }
    }
}

// Main function
int main()
{
    int node_no, edge_no;
    cout << "Enter the number of nodes: ";
    cin >> node_no;
    cout << "Enter the number of edges: ";
    cin >> edge_no;

    Node_Vec.resize(node_no + 1); // Resize the vector to accommodate nodes

    // Input edges and build the graph
    for (int i = 1; i <= edge_no; i++)
    {
        int nodeA, nodeB;
        cout << "Enter nodes for edge " << i << ": ";
        cin >> nodeA >> nodeB;

        // Bounds checking to ensure node numbers are valid
        if (nodeA < 1 || nodeA > node_no || nodeB < 1 || nodeB > node_no)
        {
            cout << "Invalid node number. Exiting.\n";
            return 1;
        }

        // Add edges between nodes
        Node_Vec[nodeA].neighbors.push_back(nodeB);
        Node_Vec[nodeB].neighbors.push_back(nodeA);
    }

    int starting_node;
    cout << "Enter the starting node for BFS: ";
    cin >> starting_node;

    // Bounds checking to ensure starting node is valid
    if (starting_node < 1 || starting_node > node_no)
    {
        cout << "Invalid starting node. Exiting.\n";
        return 1;
    }

    // Perform BFS traversal starting from the specified node
    cout << "BFS traversal starting from node " << starting_node << ": ";
    BFS(starting_node);
    cout << endl;

    return 0;
}



