#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N, M, K;
    int team;
    cin >> N >> M >> K;
    
    while (K--) {
        if (N >= M*2) {
            team = M;
            N--;
        }
        else {
            team = M-1;
            M--;
        }
    }
    
    if (N >= M*2) team = M;
    else  team = N/2;
    
    cout << team << endl;
}
