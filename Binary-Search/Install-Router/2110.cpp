#include <iostream>
#include <algorithm>

using namespace std;

long long arr[200001] = {0, };

int main() {
    long long N, C, mx=0, install, dist=0;
    cin >> N >> C;
    
    for (int i=0; i<N; i++) {
        cin >> arr[i];
        if (mx < arr[i]) mx = arr[i];
    }
    
    sort(arr, arr+N);
    
    long long left = 1;
    long long right = arr[N-1];
    
    while (left <= right) {
        long long mid = (left + right) / 2;
        long long prev = arr[0], install = 1;

        for (int i=0; i<N; i++) {
            if (arr[i] - prev >= mid) {
                prev = arr[i];
                install++;
            }
        }
        
        if (install >= C) {
            if (dist < mid) dist = mid;
            left = mid + 1;
        }
        else right = mid - 1;
    }
    cout <<  dist << endl;
}
