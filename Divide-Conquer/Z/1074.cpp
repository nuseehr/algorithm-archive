#include <iostream>
#include <cmath>

using namespace std;

int N, R, C;
int ans = 0;

void divide(int size, int y, int x) {
    cout << size << " " << y << " " << x << endl;
    
    if (y == R && x == C){
        cout << ans << endl;
        return
    }

}

int main() {
    cin >> N >> R >> C;
    divide(pow(2, N), 0, 0);
}
