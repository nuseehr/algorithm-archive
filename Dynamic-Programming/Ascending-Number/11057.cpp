#include <iostream>

using namespace std;

int main() {
    int dp[1001][10];
    int N;
    cin >> N;
    
    for (int i=0; i<10; i++) dp[0][i] = 1;

    for (int i=1; i<=N; i++) {
        dp[i][0] = 1;
        
        for (int j=1; j<10; j++) {
            dp[i][j] = (dp[i][j-1] + dp[i-1][j]) % 10007;
        }
    }
    cout << dp[N][9] << endl;
}
