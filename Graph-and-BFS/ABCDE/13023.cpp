#include <iostream>
#include <vector>

using namespace std;

vector<int> v[2001];
bool visited[2001];

bool dfs(int depth, int n) {
    if (depth == 5) return true;
    
    visited[n] = true;
    
    for (int i=0; i<v[n].size(); i++) {
        int next = v[n][i];
        if (visited[next]) continue;
        if (dfs(depth + 1, next)) return true;
    }
    
    visited[n] = false;
    return false;
}

using namespace std;

int main() {
    int depth, N, M, a, b;
    scanf("%d %d", &N, &M);
    
    for (int i=0; i<M; i++) {
        scanf("%d %d", &a, &b);
        v[a].push_back(b);
        v[b].push_back(a);
    }
    
    for (int i=0; i<N; i++) {
        if (dfs(1, i)) {
            cout << "1\n";
            return 0;
        }
    }
    cout << "0\n";
}
