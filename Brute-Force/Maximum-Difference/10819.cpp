#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int arr[9];

int main() {
    int N;
    
    cin >> N;
    int max = 0;
    for (int i=0; i<N; i++) cin >> arr[i];
    
    sort(arr, arr+N);
    
    while (true) {
        int t = 0;
        for (int i=0; i<N-1; i++) {
            t += abs(arr[i] - arr[i+1]);
        }
        if (t > max) max = t;
        if (!next_permutation(arr, arr+N)) {
            cout << max << endl;
            return 0;
        }
    }
}
