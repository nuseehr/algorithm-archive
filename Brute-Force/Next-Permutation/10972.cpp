#include <iostream>
#include <algorithm>

using namespace std;

int arr[10002];

void prnt(int N) {
    for (int i=1; i<=N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int N;
    bool check = false;
    cin >> N;
    
    for (int i=1; i<=N; i++) cin >> arr[i];
    
    for (int i=N; i>1; i--) {
        if (arr[i] > arr[i-1]) {
            check = true;
            for (int j=N; j>i-1; j--) {
                if (arr[j] > arr[i-1]) {
                    int t = arr[i-1];
                    arr[i-1] = arr[j];
                    arr[j] = t;
                    break;
                }
                else continue;
            }
            sort(arr + i, arr + N+1);
            break;
        }
    }
    if (!check) {
        cout << -1 << endl;
        return 0;
    }
    prnt(N);
}
