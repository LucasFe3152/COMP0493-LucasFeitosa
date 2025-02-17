#include "header.h"

void dfs(int u, unordered_map<int, vector<int>>& adj, vector<bool>& visited) {
    visited[u] = true;
    //nó atual
    for (auto i : adj[u]) {
        if (!visited[i]) {
            dfs(i, adj, visited);
        }
    }
}

void bfs(int u, unordered_map<int, vector<int>>& adj, vector<bool>& visited) {
    queue<int> q;
    q.push(u);
    int v;
    while (!q.empty()) {
        v = q.front();
        q.pop();
        visited[v] = true;
        //visitou o nó atual
        for (auto i : adj[v]) {
            if (!visited[i]) {
                q.push(i);
            }
        }
    }
}