#include <bits/stdc++.h>
using namespace std;

const int n = 100;
int adj[n][n];
int v, e;
bool visit[n];


bool bfs(int start, int target) {
    queue<int> q;
    visit[start] = true;
    q.push(start);

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";


        if (node == target) {
            return true;
        }


        for (int i = 1; i <= v; i++) {
            if (adj[node][i] == 1 && !visit[i]) {
                visit[i] = true;
                q.push(i);
            }
        }
    }

    return false;
}

int main() {
    cout << "Enter number of vertices and edges:" << endl;
    cin >> v >> e;
    cout << "Enter node pairs (space-separated) representing edges:" << endl;

    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    int start, target;
    cout << "Enter the start point:" << endl;
    cin >> start;
    cout << "Enter the target node to search for:" << endl;
    cin >> target;


    bool found = bfs(start, target);
    if (found) {
        cout << "\nTarget node " << target << " found." << endl;
    } else {
        cout << "\nTarget node " << target << " not found." << endl;
    }

    return 0;
}

