#include <iostream>
#include <cmath>

using namespace std;

int dSum(int N) {
    int sum = 0;

    while (N != 0) {
        sum += N % 10;
        N /= 10;
    }
    return sum;
}

int main() {
    int N, M, K;
    cin >> N;
    K = log10(N)+1;
    
    for (int i=9*K; i>=K; i--) {
        if(dSum(N-i) == N - (N-i)) {
            cout << N-i << endl;
            break;
        }
        if(i == K) cout << 0 << endl;
    }
}
