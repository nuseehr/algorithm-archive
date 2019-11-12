#include <iostream>

using namespace std;

int m[21][21] = {0, };

int main() {
    int N;
    cin >> N;
    
    for (int i=0; i<N; i++) {
        char in;
        for (int j=0; j<N; j++) {
            cin >> in;
            if (in == 'H') m[i][j] = 0;
            else m[i][j] = 1;
        }
    }
    
    
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}
