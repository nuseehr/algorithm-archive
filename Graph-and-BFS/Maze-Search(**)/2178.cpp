#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N, M;

int map[101][101];
int visited[101][101];
int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool isInside(int i, int j) {
    return ((i>=0 && i<N) && (j>=0 && j<M));
}

void bfs() {
    int cy = 0, cx = 0;
    
    queue<pair<int, int> >q;
    q.push(pair<int, int>(cy, cx));
    visited[cy][cx] = 1;
    
    while (!q.empty()) {
        cy = q.front().first;
        cx = q.front().second;
        q.pop();
        
        if (cy == N-1 && cx == M-1) break;
        
        for (int i=0; i<4; i++) {
            int dy = cy + dir[i][0];
            int dx = cx + dir[i][1];
            
            if (isInside(dy, dx) && !visited[dy][dx] && map[dy][dx]) {
                visited[dy][dx] = visited[cy][cx] + 1;
                q.push(pair<int, int>(dy, dx));
            }
        }
    }
    
//    cout << endl;
//    for (int i=0; i<N; i++) {
//        for (int j=0; j<M; j++) {
//            cout << visited[i][j] << " ";
//        }
//        cout << endl;
//    }
}

int main() {
    cin >> N >> M;
    
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            scanf("%1d", &map[i][j]);
        }
    }
    bfs();
    cout << visited[N-1][M-1] << endl;
}
