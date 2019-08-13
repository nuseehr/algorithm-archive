#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int length;
    cin >> length;
    vector<int> arr(length, 0);
    for (int i=0; i<length; i++) cin >> arr[i];
    
    int idx = 0;
    vector<int> lis;
    lis.push_back(arr[0]);
    
    for(int i=0; i<length; i++) {
        if(arr[i] > lis[idx]) {
            idx++;
            lis.push_back(arr[i]);
        }
        else {
            auto it = lower_bound(lis.begin(), lis.end(), arr[i]);
            *it = arr[i];
        }
    }
    cout << lis.size() << endl;
}
