#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        int arr[2][100001] = {0, };
        int dp[2][100001] = {0, };
        int mx = 0;
        int N;
        cin >> N;
        
        for (int i=0; i<2; i++) {
            for (int j=0; j<N; j++) {
                cin >> arr[i][j];
            }
        }
        
        dp[0][0] = arr[0][0];
        dp[0][1] = arr[0][1];
     
        for (int i=0; i<N; i++) {
            
        }
    }
}
