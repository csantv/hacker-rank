#ifndef ALGORITHM_PRACTICE_GRAPH_HPP
#define ALGORITHM_PRACTICE_GRAPH_HPP

#include <list>
#include <memory>
#include <vector>

class Graph {
    int V;
    std::unique_ptr<std::vector<std::list<int>>> adj;
    void DFSUtil(int v, std::vector<bool> visited);
public:
    explicit Graph(int V);

    void addEdge(int v, int w);
    void BFS(int s);
    void DFS(int v);
};

#endif //ALGORITHM_PRACTICE_GRAPH_HPP
