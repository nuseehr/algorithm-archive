#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int N, M, ans;
vector<int> e[10001];
int visited[10001];

void bfs() {
    queue<int> q;
    q.push(1);
    visited[1] = 1;
    
    while (!q.empty()) {
        int n = q.front();
        q.pop();
        
        for (int i=0; i<e[n].size(); i++) {
            if (!visited[e[n][i]]) {
                visited[e[n][i]] = visited[n] + 1;
                q.push(e[n][i]);
            }
        }
    }
    for (int i=2; i<=N; i++) {
        if (visited[i] <= 3 && visited[i] != 0) {
            ans++;
        }
    }
    cout << ans << endl;
}

int main() {
    
    cin >> N >> M;
    
    int a, b;
    for (int i=0; i<M; i++) {
        scanf("%d %d", &a, &b);
        e[a].push_back(b);
        e[b].push_back(a);
    }
    
    for (int i=1; i<=N; i++) sort(e[i].begin(), e[i].end());
    
    bfs();
}
