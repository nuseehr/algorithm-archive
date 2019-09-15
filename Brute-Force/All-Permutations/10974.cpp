#include <iostream>
#include <algorithm>

using namespace std;

int arr[10001];

int main() {

    int N;
    cin >> N;
    
    for (int i=0; i<N; i++) {
        arr[i] = i+1;
        cout << arr[i] << " ";
    }
    cout << "\n";
    
    while (true) {
        if (!next_permutation(arr, arr+N)) return 0;
        for (int i=0; i<N; i++) cout << arr[i] << " ";
        cout << "\n";
    }
}
