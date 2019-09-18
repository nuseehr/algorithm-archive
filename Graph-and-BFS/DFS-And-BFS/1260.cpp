#include <iostream>
#include <vector>

using namespace std;

vector<int> g[1001];
bool visited[1001];

int N, M, V, a, b;

bool dfs(int depth, int crnt) {
    cout << crnt << " ";
    
    if (depth == M) return true;
    
    visited[crnt] = true;
    
    for (int i=0; i<g[crnt].size(); i++) {
        int next = g[crnt][i];
        if (visited[crnt]) continue;
        if (dfs(depth + 1, next)) return true;
    }
    
    visited[crnt] = false;
    
    return false;
}

int main() {
    
    cin >> N >> M >> V;
    
    for (int i=0; i<M; i++) {
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    
    dfs(1, V);
    
    cout << "\n";
    
}
