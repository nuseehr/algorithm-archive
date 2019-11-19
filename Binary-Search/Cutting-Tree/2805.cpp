#include <iostream>
#include <algorithm>

using namespace std;

long long arr[1000001];

int main() {
    long long N, M, ans=0, mx=0;
    
    cin >> N >> M;
    
    for (int i=0; i<N; i++) {
        cin >> arr[i];
        if (mx < arr[i]) mx = arr[i];
    }

    long long left = 0;
    long long right = mx;
    
    while (left <= right) {
        long long mid = (left + right) / 2;
        long long cutted = 0;
        
        for (int i=0; i<N; i++) {
            if (arr[i] > mid) cutted += arr[i] - mid;
        }
        
        if (cutted >= M) {
            if (ans < mid) ans = mid;
            left = mid + 1;
        }
        else right = mid - 1;
    }
    cout << ans <<  endl;
}
