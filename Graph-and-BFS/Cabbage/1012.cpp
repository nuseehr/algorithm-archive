#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int farm[51][51];
int M, N, K;
int bugs;
vector<int> v;

bool isInside(int i, int j) {
    return ((i>=0 && i<N) && (j>=0 && j<M));
}

void dfs(int a, int b, int cnt) {
    
    farm[a][b] = 5;
    
    for (int i=0; i<4; i++) {
        int dy = a + dir[i][0];
        int dx = b + dir[i][1];
        
        if (isInside(dy, dx) && farm[dy][dx] == 1) {
            dfs(dy, dx, cnt);
        }
    }
}

int main() {
    int testCases;
    cin >> testCases;
    
    for (int t=0; t<testCases; t++) {
        memset(farm, 0, sizeof(farm));
        bugs = 0;
        cin >> M >> N >> K;
        
        while (K--) {
            int x, y;
            cin >> x >> y;
            farm[y][x] = 1;
        }
        
        for (int i=0; i<N; i++) {
            for (int j=0; j<M; j++) {
                if (farm[i][j] == 1) {
                    dfs(i, j, bugs);
                    bugs++;
                }
            }
        }
        v.push_back(bugs);
    }
    
    for (int i=0; i<testCases; i++) {
        cout << v[i] << endl;
    }
    
}
