#include <iostream>
#include <cmath>

using namespace std;

int N, R, C;
int ans = 0;
bool find = false;

void divide(int N, int y, int x) {
    
    if (N == 0) return;
    int len = pow(2, N);
    int size = len * len;
    int half = len/2;
    
    // 1
    if (y < half && x < half) {
        divide(N-1, y, x);
    }
    // 2
    else if (y < half && x >= half) {
        ans += size / 4;
        divide(N-1, y, x-half);
    }
    // 3
    else if (y >= half && x < half) {
        ans += (size / 4) * 2;
        divide(N-1, y-half, x);
    }
    // 4
    else if (y >= half && x >= half) {
        ans += (size / 4) * 3;
        divide(N-1, y-half, x-half);
    }

}

int main() {
    cin >> N >> R >> C;
    divide(N, R, C);
    cout << ans << endl;
}
