#include<iostream>
#include<queue>

using namespace std;

int box[1001][1001];
int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int N, M;
int tomato = 0;
queue<pair<int, int> > q;

bool isInside(int y, int x) {
    return ((y >= 0 && y < M) && (x >= 0 && x < N));
}

void bfs() {
    int near, days = 0;
    int dy, dx;
    
    while(!q.empty()){
        near = q.size();
        tomato += q.size();

        if(tomato == N*M){
            cout << days << endl;
            break;
        }
        
        days++;
        
        for(int i=0; i<near; i++){
            int cy = q.front().first;
            int cx = q.front().second;
            q.pop();
        
            for(int j=0; j<4; j++){
                dy = cy + dir[j][0];
                dx = cx + dir[j][1];
                if(isInside(dy, dx) && box[dy][dx] == 0){
                    box[dy][dx] = 1;
                    q.push(make_pair(dy, dx));
                }
            }
        }
    }
    if(tomato != N*M) cout << "-1" << endl;
}

int main(){
    cin >> N >> M;
    
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            cin >> box[i][j];
            if(box[i][j] == 1) q.push(make_pair(i, j));
            else if(box[i][j] == -1) tomato++;
        }
    }
    bfs();
}

