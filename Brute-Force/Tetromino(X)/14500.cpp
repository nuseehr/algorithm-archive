#include <iostream>
#include <algorithm>

using namespace std;

int N, M, dab;
int arr[501][501];
int check[501][501];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};

int main() {
    int N, M;
    int tmp = 0;
    int answer = 0;
    cin >> N >> M;
    
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            cin >> arr[i][j];
        }
    }
  
    for (int i=0; i<N; i++) {
        for (int j=0; j<M; j++) {
            check[i][j] = 1;
            dfs(1, j, i, arr[i][j]);
            check[i][j] = 0;
            
        }
    }
}
