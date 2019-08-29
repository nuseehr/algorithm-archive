#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> v(9, 0);
    int sum = 0;
    
    for (int i=0; i<9; i++) {
        cin >> v[i];
        sum += v[i];
    }
    
    sort(v.begin(), v.end());

    bool fnd = false;

    for (int i=0; i<9; i++) {
        for (int j=i+1; j<9; j++) {
        
            if (!fnd && (sum - (v[i] + v[j]) == 100)) {
                v[i] = -1, v[j] = -1;
                fnd = true;
                break;
            }
        }
        if (v[i] != -1) cout << v[i] << endl;
    }

}
