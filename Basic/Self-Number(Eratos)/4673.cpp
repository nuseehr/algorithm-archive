
/*
 n, d(n), d(d(n)), d(d(d(n))), ... 을
 for 문으로 정의하였다.
 */

#include <iostream>
#include <cmath>
using namespace std;

int mx = 10001;
bool isSelfNum[10001];

int tryCheck(int n) {
    int sum = n;
    while (true) {
        if (n == 0) break;
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
 
    for (int i=1; i<mx; i++) {
        for (int j=tryCheck(i); j<mx; j=tryCheck(j)) {
            if (isSelfNum[j]) continue;
            isSelfNum[j] = true;
        }
    }
    for (int i=1; i<mx; i++) {
        if (!isSelfNum[i]) printf("%d\n", i);
    }
 
}
