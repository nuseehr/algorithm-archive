#include <iostream>
#include <queue>

using namespace std;

int M, N;
int box[1001][1001];
int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int visited[1001][1001];
int cy, cx, tmts=0;
int days = 2147483647;
queue<pair<int, int> > q;

bool isInside(int i, int j) {
    return ((i>=0 && i<N) && (j>=0 && j<M));
}

void bfs() {
    int cnt = 0;
    visited[q.front().first][q.front().second] = 1;

    while (!q.empty()) {
        tmts += q.size();
        cnt++;
        
        if (N*M == tmts) {
            cout << cnt << endl;
            break;
        }
        
        for (int k=0; k<q.size(); k++) {
            cy = q.front().first;
            cx = q.front().second;
            q.pop();
            
            for (int i=0; i<4; i++) {
                int dy = cy + dir[i][0];
                int dx = cx + dir[i][1];

                if (isInside(dy, dx) && !visited[dy][dx] && !box[dy][dx]) {
                    visited[dy][dx] = visited[cy][cx] + 1;
                    q.push(pair<int, int>(dy, dx));
                }
            }
        }
//        // - - - - - - - - - - - - - - - - - - - - -
//        cout << endl;
//        for (int i=0; i<N; i++) {
//            for (int j=0; j<M; j++) {
//                cout << visited[i][j] << " ";
//            }
//            cout << endl;
//        }
//        // - - - - - - - - - - - - - - - - - - - - -
    }
    
    if (N*M != tmts) cout << -1 << endl;
 
}

int main() {
    cin >> M >> N;

    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cin >> box[i][j];
            if (box[i][j] == 1) {
                q.push(pair<int, int>(i, j));
                tmts++;
            }
            else if (box[i][j] == -1) tmts++;
        }
    }
    bfs();
}

