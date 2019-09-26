#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
 
int map[25][25];    //정사각형 모양의 지도
 
int size[323];  //단지의 집 개수 [ (n*n/2) + 1개 ]
                //대각선은 이어진게아니므로 크기가 n일때 집의 최대 개수
 
int dir[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1}};    //상하좌우 확인을 위한 2차원 배열
 
int cnt;    //단지의 개수
 
int n;  //입력받을 n
 
//좌표가 배열의 범위를 넘지 않는지
bool isInside(int a, int b){
    return (a>=0 && a<n) && (b>=0 && b<n);
}
 
//재귀를 통한 깊이 우선 탐색(dfs)
void dfs(int a, int b, int key){
    map[a][b] = key;
 
    for(int i=0; i<4; i++){
        int dy = a + dir[i][0];
        int dx = b + dir[i][1];
 
        if(isInside(dy, dx) && map[dy][dx] == 1){
            dfs(dy, dx, key);
        }
    }
}

void prntMap() {
    for(int i=0; i<n; i++){ //맵을 탐색하면서 1인 부분을 찾으면
        for(int j=0; j<n; j++) {
            cout << map[i][j] << " ";
        }
        cout << endl;
    }
    cout << "- - - - - - - -" << endl;
}
 
void Solution(int n){
    for(int i=0; i<n; i++){ //맵을 탐색하면서 1인 부분을 찾으면
        for(int j=0; j<n; j++) {
            if (map[i][j] == 1) {   //dfs로 보낸다
                cout << "(i, j) = " << i << ", " << j << endl;
                prntMap();
                cnt++;
                dfs(i, j, cnt + 1);
                
            }
        }
    }
 
    for(int i=0; i<n; i++){ //dfs에서 key값을 통해서 각 dfs마다 숫자를 지정해 놓았습니다
        for(int j=0; j<n; j++){
            if(map[i][j] >1){   //같은 숫자의 갯수를 더해서 배열에 집어 넣습니다
                size[map[i][j] - 2]++;
            }
        }
    }
}
 
int main(void){
    //입력
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++) {
            scanf("%1d", &map[i][j]);   //숫자 하나씩 입력 받습니다
        }
    }
 
    Solution(n);
    sort(size, size + cnt); //정렬(오름차순으로)
 
    //출력
    cout << cnt << endl;
    for(int i=0; i<cnt; i++){
        cout << size[i] << endl;
    }
 
    return 0;
}
