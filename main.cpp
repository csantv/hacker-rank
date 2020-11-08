#include <iostream>
#include "Graph.hpp"

using std::cout;
using std::endl;

int main() {
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2)" << endl;
    g.BFS(2);

    cout << "Following is Depth First Traversal "
         << "(starting from vertex 2) \n";
    g.DFS(2);

    return 0;
}
