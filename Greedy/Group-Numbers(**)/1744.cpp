#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int ans = 0;
    int n;
    cin >> n;
    vector<int> v(n, 0);
    
    for (int i=0; i<n; i++) cin >> v[i];
    
    sort(v.begin(), v.end());
    
    int left = 0;
    int right = n-1;
    
    while (left < right) {
        if (v[left] < 1 && v[left+1] < 1)
            ans += v[left] * v[left+1];
        else break;
        left += 2;
    }
    
    while (right) {
        if (v[right] > 1 && v[right-1] > 1)
            ans += v[right] * v[right-1];
        else break;
        right -= 2;
    }
    
    while (right >= left) {
        ans += v[right];
        right--;
    }
    cout << ans << endl;
}
