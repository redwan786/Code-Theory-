#include <iostream>
#include <vector>
using namespace std;

vector<int> Node_Vec[100]; // Array of vectors to store adjacent nodes
vector<int> Node_Cost[100]; // Array of vectors to store corresponding edge costs

int main() {
    int node_no, edge_no;

    // Input number of nodes
    cout << "Enter the number of nodes: ";
    cin >> node_no;

    // Input number of edges
    cout << "Enter the number of edges: ";
    cin >> edge_no;

    // Input edges and their costs
    for (int i = 1; i <= edge_no; i++) {
        int nodeA, nodeB, cost;
        cin >> nodeA >> nodeB >> cost;
        Node_Vec[nodeA].push_back(nodeB); //for directed Add adjacent node to nodeA's list
        Node_Cost[nodeA].push_back(cost); //for directed Add corresponding cost to nodeA's list
    }
    cout << endl;

    // Print Cost Adjacency List by traversing the list
    for (int i = 1; i <= node_no; i++) {
        cout << i << " -> ";
        for(int j=0; j<Node_Cost[i].size(); j++) {
            cout << Node_Cost[i][j] << " "; // Print the cost of edge from node i
        }
        cout << endl;
    }

    return 0;
}

/*

Enter the number of nodes: 5
Enter the number of edges: 6
1 5 100
1 4 50
2 4 30
3 4 10
3 5 15
4 2 60

1 -> 100 50
2 -> 30 60
3 -> 10 15
4 -> 50 30 10 60
5 -> 100 15



*/
