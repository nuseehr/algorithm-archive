#include <iostream>

using namespace std;

long long arr[10001] = {0, };

int main() {
    long long K, N, mx=0, ans=0;
    
    cin >> K >> N;
    
    for (int i=0; i<K; i++) {
        cin >> arr[i];
        if (mx < arr[i]) mx = arr[i];
    }
    
    long long left = 0;
    long long right = mx;
    
    while (left <= right) {
        long long mid = (left + right) / 2;
        long long cutted = 0;
        
        if (mid == 0) mid = 1;
        
        for (int i=0; i<K; i++) {
            if (arr[i] >= mid && mid) {
                cutted += arr[i] / mid;
            }
        }
        
        if (cutted >= N) {
            if (ans < mid) ans = mid;
            left = mid + 1;
        }
        else right = mid - 1;
    }
    cout << ans << endl;
}
