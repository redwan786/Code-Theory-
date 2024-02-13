#include<bits/stdc++.h>
using namespace std;

struct Node
{
    vector<int> neighbors;
    bool visited = false;
};

vector<Node> Node_Vec;

void BFS(int starting_node)
{
    queue<int> Q;
    Node_Vec[starting_node].visited = true;
    Q.push(starting_node);

    while (!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        cout << u << " ";

        for (int v : Node_Vec[u].neighbors)
        {
            if (!Node_Vec[v].visited)
            {
                Node_Vec[v].visited = true;
                Q.push(v);
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

        // Bounds checking
        if (nodeA < 1 || nodeA > node_no || nodeB < 1 || nodeB > node_no)
        {
            cout << "Invalid node number. Exiting.\n";
            return 1;
        }

        Node_Vec[nodeA].neighbors.push_back(nodeB);
        Node_Vec[nodeB].neighbors.push_back(nodeA);
    }

    int starting_node;
    cout << "Enter the starting node for BFS: ";
    cin >> starting_node;

    // Bounds checking
    if (starting_node < 1 || starting_node > node_no)
    {
        cout << "Invalid starting node. Exiting.\n";
        return 1;
    }

    cout << "BFS traversal starting from node " << starting_node << ": ";
    BFS(starting_node);
    cout << endl;

    return 0;
}
