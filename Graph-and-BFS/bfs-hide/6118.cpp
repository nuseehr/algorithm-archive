#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int N, M, x, y, z=0;
vector<int> e[20001];
int visited[50001];
int mx = 0;
bool fnd = false;

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
    
    mx = *max_element(visited, visited+N);
    for (int i=2; i<=N; i++) {
        if (visited[i] == mx && fnd == false) {
            fnd = true;
            x = i;
            z++;
        }
        else if (visited[i] == mx) z++;
    }
    y = visited[x]-1;
    cout << x << " " << y << " " << z << endl;
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

