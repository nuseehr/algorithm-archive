#include <iostream>
#include <algorithm>

using namespace std;

int N;
int map[26][26];
int nums[1000];
int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool isInside(int i, int j) {
    return ((i>=0 && i<N) && (j>=0 && j<N));
}

void dfs(int a, int b, int cnt) {
    map[a][b] = cnt+1;
    nums[cnt]++;
    
    for (int i=0; i<4; i++) {
        int dy = a + dir[i][0];
        int dx = b + dir[i][1];
        
        if (isInside(dy, dx) && map[dy][dx] == 1) {            dfs(dy, dx, cnt);
        }
    }
}

void prntMap() {
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cout << map[i][j];
        }
        cout << endl;
    }
}

int main() {
    int cnt = 1;
    cin >> N;
    
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            scanf("%1d", &map[i][j]);
        }
    }
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            if (map[i][j] == 1) {
                dfs(i, j, cnt);
                cnt++;
            }
        }
    }
    cnt -= 1;
    cout << cnt << endl;
    
    sort(nums+1, nums+(cnt+1));
    for (int i=1; i<=cnt; i++) {
        cout<< nums[i] << endl;
    }
}
