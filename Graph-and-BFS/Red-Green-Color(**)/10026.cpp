#include <iostream>
#include <string>

using namespace std;

int n;
char map[101][101];
int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
// 상, 하, 좌, 우

bool isInside(int a, int b) {
    return (a>=0 && a<n) && (b>=0 && b<n);
}

void dfs(int a, int b, char cur) {
    if (cur == 'R' || cur == 'G') {
        map[a][b] = '0';
    }
    else if (cur == 'B') map[a][b] = '1';
    else if (cur == '0') map[a][b] = '3';
    else if (cur == '1') map[a][b] = '4';
    
    for (int i=0; i<4; i++) {
        int dy = a + dir[i][0];
        int dx = b + dir[i][1];
        
        if(isInside(dy, dx) && map[dy][dx] == cur){
             dfs(dy, dx, cur);
         }
    }
}

int main() {
    char s;
    int colors = 0;
    int rb = 0;
    cin >> n;
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> map[i][j];
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (map[i][j] == 'R') {
                colors++;
                dfs(i, j, 'R');
            }
            else if (map[i][j] == 'G') {
                colors++;
                dfs(i, j, 'G');
            }
            else if (map[i][j] == 'B') {
                colors++;
                dfs(i, j, 'B');
            }
        }
    }
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (map[i][j] == '0') {
                rb++;
                dfs(i, j, '0');
            }
            else if (map[i][j] == '1') {
                rb++;
                dfs(i, j, '1');
            }
        }
    }
    
    cout << colors << " " << rb << endl;
}
