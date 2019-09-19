#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int N, M, V;
vector<int> e[1001];
bool visited[1001];

void dfs(int n) {
    
    cout << n << " ";
    
    for (int i=0; i<e[n].size(); i++) {
        int next = e[n][i];
        if (!visited[next]) {
            visited[next] = true;
            dfs(e[n][i]);
        }
    }
}

void bfs() {
    queue<int> q;
    q.push(V);
    
    visited[V] = 1;
    while (!q.empty()) {
        int n = q.front();
        q.pop();
        
        cout << n << " ";
        for (int i=0; i<e[n].size(); i++) {
            if (!visited[e[n][i]]) {
                visited[e[n][i]] = true;
                q.push(e[n][i]);
            }
        }
    }
}

int main() {
    
    cin >> N >> M >> V;
    
    int a, b;
    for (int i=0; i<M; i++) {
        scanf("%d %d", &a, &b);
        e[a].push_back(b);
        e[b].push_back(a);
    }
    
    for (int i=1; i<=N; i++) sort(e[i].begin(), e[i].end());
    
    visited[V] = true;
    dfs(V);
    cout << "\n";
    
    for (int i=1; i<=N; i++) visited[i] = false;
    
    bfs();
    cout << "\n";
}
