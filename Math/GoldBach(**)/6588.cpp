#include <iostream>

using namespace std;

bool m[1000001];

void goldBach(int num) {
    bool fnd = false;
    for (int i=2; i<num; i++) {
        int x = num - i;
        bool fnd = false;
        if (m[i] && m[x] && !fnd) {
            printf("%d = %d + %d\n", num, i, x);
            fnd = true;
            return;
        }
    }
    if (!fnd) printf("Goldbach's conjecture is wrong.\n" );
}

int main() {
    
    for (int i=2; i<=1000000; i++) m[i] = 1;
    
    for (int i=2; i*i<=1000000; i++) {
        if (m[i] == 1) {
            for (int j=i*i; j<1000000; j+=i) {
                m[j] = 0;
            }
        }
    }
    
    while (true) {
        int N;
        scanf("%d", &N);
        if (N == 0) return 0;
        goldBach(N);
    }
}
