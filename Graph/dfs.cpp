#include<bits/stdc++.h>
using namespace std;

struct Node
{
    vector<int> neighbors;
    bool visited = false;
};

vector<Node> Node_Vec;

// Function to perform Depth First Search (DFS) traversal on the graph
void DFS(int starting_node)
{
    stack<int> S; // Stack to store nodes to be visited
    S.push(starting_node); // Add the starting node to the stack

    // Continue traversal until all reachable nodes are visited
    while (!S.empty())
    {
        int u = S.top(); // Get the top element of the stack
        S.pop(); // Remove the top element from the stack

        // If the node has already been visited, skip it
        if (Node_Vec[u].visited)
            continue;

        Node_Vec[u].visited = true; // Mark the current node as visited
        cout << u << " "; // Print the current node

        // Traverse through the neighbors of the current node in reverse order
        // to maintain the order in DFS (optional)
        for (int i = Node_Vec[u].neighbors.size() - 1; i >= 0; --i)
        {
            int v = Node_Vec[u].neighbors[i];
            // If the neighbor has not been visited yet, push it onto the stack
            if (!Node_Vec[v].visited)
            {
                S.push(v);
            }
        }
    }
}

int main()
{
    int node_no, edge_no;
    cout << "Enter the number of nodes: ";
    cin >> node_no;
    cout << "Enter the number of edges: ";
    cin >> edge_no;

    Node_Vec.resize(node_no + 1);

    for (int i = 1; i <= edge_no; i++)
    {
        int nodeA, nodeB;
        cout << "Enter nodes for edge " << i << ": ";
        cin >> nodeA >> nodeB;

        if (nodeA < 1 || nodeA > node_no || nodeB < 1 || nodeB > node_no)
        {
            cout << "Invalid node number. Exiting.\n";
            return 1;
        }

        Node_Vec[nodeA].neighbors.push_back(nodeB);
        Node_Vec[nodeB].neighbors.push_back(nodeA);
    }

    int starting_node;
    cout << "Enter the starting node for DFS: ";
    cin >> starting_node;

    if (starting_node < 1 || starting_node > node_no)
    {
        cout << "Invalid starting node. Exiting.\n";
        return 1;
    }

    cout << "DFS traversal starting from node " << starting_node << ": ";
    DFS(starting_node);
    cout << endl;

    return 0;
}

