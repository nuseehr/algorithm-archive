#include <iostream>

using namespace std;

int map[2188][2188];
int ans[3];

bool check(int size, int oy, int ox) {
    for (int i=oy; i<oy + size; i++) {
        for (int j=ox; j<ox + size; j++) {
            if (map[oy][ox] != map[i][j]) return false;
        }
    }
    return true;
}

void divide(int size, int y, int x) {
    int num = map[y][x];
    
    if (check(size, y, x)) {
        if (num == -1) ans[0] += 1;
        else if (num == 0) ans[1] += 1;
        else ans[2] += 1;
    }
    else {
        int ns = size/3;
        for (int i=0; i<3; i++) {
            for (int j=0; j<3; j++) {
                divide(ns, y + (i * ns), x + (j * ns));
            }
        }
    }
}

int main() {
    int N;
    cin >> N;
    
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            cin >> map[i][j];
        }
    }
    divide(N, 0, 0);
    cout << ans[0] << endl;
    cout << ans[1] << endl;
    cout << ans[2] << endl;
}
