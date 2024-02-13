
#include<bits/stdc++.h>
using namespace std;

vector<int>Node_Vec[100]; // Have to take 100 vectors.... you can take take vector in the no. of nodes

int main()
{
    int node_no, edge_no;
    printf("Enter the number of nodes: ");
    scanf("%d", &node_no);
    printf("Enter the number of edges: ");
    scanf("%d", &edge_no);
    for (int i = 1; i <= edge_no; i++)
    {
        int nodeA, nodeB;
        scanf("%d %d", &nodeA, &nodeB);
        Node_Vec [nodeA].push_back(nodeB); // for undirected graph.......(nodeA no.) 1 number Node_Vec a (nodeB) 2 ke push korchi
        Node_Vec [nodeB].push_back(nodeA);
    }

//Print Node Adjacency List by traversing the list

    for (int i=1; i <= node_no; i++)
    {
        printf("%d -> ", i);

        for (int j=0; j<Node_Vec[i].size(); j++) //  if i = 1; --> 1 number vector er size
        {
            printf("%d ", Node_Vec[i][j]); // two dimentional vector.....(if -> i=1 & j=0) 1 number vector er 0 th value
        }
        printf("\n");
    }
}

/*

Enter the number of nodes: 5
Enter the number of edges: 6
1 2
1 3
2 3
2 4
3 4
3 5
1 -> 2 3
2 -> 1 3 4
3 -> 1 2 4 5
4 -> 2 3
5 -> 3

*/

