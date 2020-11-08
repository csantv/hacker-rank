#include "Graph.hpp"
#include <iostream>
#include <queue>

using namespace std;

Graph::Graph(int V):
V(V)
{
    adj = make_unique<vector<list<int>>>(V);
}

void Graph::addEdge(int v, int w)
{
    (*adj)[v].push_back(w);
}

void Graph::BFS(int s)
{
    vector<bool> visited(this->V, false);
    queue<int> q;

    visited[s] = true;
    q.push(s);

    while (!q.empty()) {
        s = q.front();
        cout << s << " ";
        q.pop();

        for (auto it = (*adj)[s].begin(); it != (*adj)[s].end(); ++it) {
            if (!visited[*it]) {
                visited[*it] = true;
                q.push(*it);
            }
        }
    }
    cout << endl;
}

void Graph::DFSUtil(int v, vector<bool> visited)
{
    visited[v] = true;
    cout << v << " ";

    for (auto it = (*adj)[v].begin(); it != (*adj)[v].end(); ++it) {
        if (!visited[*it])
            DFSUtil(*it, visited);
    }
}

void Graph::DFS(int v)
{
    vector<bool> visited(this->V, false);
    this->DFSUtil(v, visited);
    cout << endl;
}