#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long N, K, ans=0, cnt=0;
    
    cin >> N >> K;
    
    long long left = 0;
    long long right = K;
    
    while (left <= right) {
        long long mid = (left + right) / 2;
        cnt = 0;
        
        for (int i=1; i<=N; i++) {
            cnt += min(mid/i, N);
        }
        
        if (cnt < K) left = mid + 1;
        else {
            ans = mid;
            right = mid -1;
        }
    }
    cout << ans << endl;
}
