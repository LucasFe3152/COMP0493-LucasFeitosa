#include "header.h"

template <typename T>
void dfs(int u, vector<T>& adj, vector<bool>& visited) {
    visited[u] = true;
    //nó atual
    for (auto i : adj[u]) {
        if (!visited) {
            dfs(v, adj, visited);
        }
    }
}   