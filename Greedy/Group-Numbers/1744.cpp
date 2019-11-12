#include <iostream>
#include <vector>

using namespace std;

int main() {
    int ans = 0;
    int n;
    cin >> n;
    vector<int> v(n, 0);
    
    for (int i=0; i<n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    
    int idx = 0;
    while (true) {
        cout << ans << endl;
        if (idx >= n) break;
        
        if (v[idx] * v[idx+1] > 0) {
            ans += v[idx] * v[idx+1];
            idx += 2;
        }
        else {
            ans += v[idx];
            idx += 1;
        }
    }
}
