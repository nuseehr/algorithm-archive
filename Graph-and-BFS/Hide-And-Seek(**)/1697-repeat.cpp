#include <iostream>
#include <queue>

using namespace std;

int N, K;
bool visited[100001];
int sec[100001];
queue<int> q;

void bfs() {
    
    while (!q.empty()) {
        int cur = q.front();
        int nxtSec = sec[cur] + 1;
        q.pop();
        
        if (!visited[cur-1] && cur-1 >= 0 && cur-1 < 100001) {
            sec[cur-1] = nxtSec;
            if (cur-1 == K) break;
            visited[cur-1] = true;
            q.push(cur-1);
        }
        if (!visited[cur+1] && cur+1 >= 0 && cur+1 < 100001) {
            sec[cur+1] = nxtSec;
            if (cur+1 == K) break;
            visited[cur+1] = true;
            q.push(cur+1);
        }
        if (!visited[cur*2] && cur*2 >= 0 && cur*2 < 100001) {
            sec[cur*2] = nxtSec;
            if (cur*2 == K) break;
            visited[cur*2] = true;
            q.push(cur*2);
        }
    }
}

int main() {
    scanf("%d %d", &N, &K);
    
    q.push(N);
    visited[N] = true;
    sec[N] = 0;
    
    bfs();
    printf("%d", sec[K]);
}
