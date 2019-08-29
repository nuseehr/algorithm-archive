#include <iostream>
#include <string>

using namespace std;

int board[51][51] = {0, };

int main() {
    int M, N;
    int answer = 64;
    cin >> M >> N;
    
    for (int i=0; i<M; i++) {
        string s;
        cin >> s;
        for (int j=0; j<N; j++) {
            if (s[j] == 'W') board[i][j] = 1;
        }
    }
    
    for (int i=0; i<M-7; i++) {
        for (int j=0; j<N-7; j++) {
            int w=0, b=0;
            
            for (int k=0; k<8; k++) {
                for (int l=0; l<8; l++) {
                    if ((k+l) % 2 == 0 && board[i+k][j+l] != 1) {
                        w++;
                    }
                    else if ((k+l) % 2 == 1 && board[i+k][j+l] != 0) {
                        w++;
                    }
                    if ((k+l) % 2 == 0 && board[i+k][j+l] != 0) {
                        b++;
                    }
                    else if ((k+l) % 2 == 1 && board[i+k][j+l] != 1) {
                        b++;
                    }
                }
            }
            if (w < b && w < answer) {
                answer = w;
            }
            else if (b <= w && b < answer) {
                answer = b;
            }
        }
    }
    cout << answer << endl;
}
