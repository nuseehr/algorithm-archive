#include <iostream>

using namespace std;

int map[101][101] = {0, };
int N, K;

int main() {
    int i, j, L;
    cin >> N >> K;
    
    while (K--) {
        cin >> i >> j;
        map[i][j] = 1;
    }
    
    int X;
    char C;
    cin >> L;
    
    while (L--) {
        cin >> X >> C;
        
    }
}
