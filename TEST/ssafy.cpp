#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int cnt = 0;
    int n = 20;
    int arr1[20] = {31,45,28,100,35,55,12,80,2,86,9,52,68,96,24,27,62,89,70,51};
    int arr2[20] = {22,20,11,91,85,3,74,26,14,72,7,92,82,93,83,56,77,76,97,87};
    
    sort(arr1, arr1+n, greater<int>());
    sort(arr2, arr2+n, greater<int>());
    
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (arr1[i] > arr2[j]) {
                cout << arr1[i] << " " << arr2[j] << endl;
                cnt++;
                break;
            }
        }
    }
    cout << cnt << endl;
}
