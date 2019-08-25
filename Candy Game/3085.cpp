#include <iostream>
#include <string>

using namespace std;

string board[51];

int main() {
    int N;
    cin >> N;
    
    for (int i=0; i<N; i++) {
        cin >> board[i];
    }
    
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cout << board[i][j];
        }
        cout << endl;
    }
}
