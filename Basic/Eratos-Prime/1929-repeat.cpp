/*
 p1. sqrt 이용.
 p2. 배수를 i+i로.
 */
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int M, N;
    scanf("%d %d", &M, &N);
    vector<bool> prime(N+1, true);
    
    for (int i=2; i<=sqrt(N); i++) {
        if (prime[i]) {
            for (int j=i+i; j<=N; j+=i) {
                prime[j] = false;
            }
        }
    }
    
    for (int i=M; i<=N; i++) {
        if (prime[i] && i != 0 && i != 1) {
            printf("%d\n", i);
        }
    }
}
