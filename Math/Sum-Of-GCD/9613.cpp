#include <iostream>

using namespace std;

int arr[1000000];

int gcd(int a, int b) {
    while (b != 0) {
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        int n;
        cin >> n;
        
        long answer = 0;
        
        for (int i=0; i<n; i++) cin >> arr[i];
        
        for (int i=0; i<n; i++) {
            for (int j=i+1; j<n; j++) {
                answer += gcd(arr[i], arr[j]);
            }
        }
        cout << answer << endl;
    }
}
