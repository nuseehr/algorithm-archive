#include <iostream>
#include <string>

using namespace std;

int board[51][51] = {0, };
int answer = 0;

void row_check(int M, int N) {
    
    for (int i=0; i<M; i++) {
        for (int j=0; j<N; j++) {
            if (board[i][j] == board[i][j+1]) {
                board[i][j+1] = !board[i][j];
                col_check(M, N);
                answer++;
            }
        }
    }
    
}

void col_check(int M, int N) {
    
    for (int i=0; i<M; i++) {
        for (int j=0; j<N; j++) {
            if (board[i][j] == board[i+1][j]) {
                board[i+1][j] = !board[i][j];
                row_check(M, N);
                answer++;
            }
        }
    }
    
}

int main() {
    int M, N;
    
    cin >> M >> N;
    
    for (int i=0; i<M; i++) {
        string s;
        cin >> s;
        for (int j=0; j<N; j++) {
            if (s[j] == 'W') board[i][j] = 1;
        }
    }
    
    row_check(M, N);
    
    cout << "- - - - - - -" << endl;
    
    for (int i=0; i<M; i++) {
        for (int j=0; j<N; j++) {
            cout << board[i][j];
        }
        cout << endl;
    }
}
