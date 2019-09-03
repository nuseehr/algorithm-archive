#include <iostream>

using namespace std;

int main() {
    int dp[1001][1001];
    int N, K;
    cin >> N >> K;
    
    for (int i=1; i<=N; i++) {
        dp[i][0] = 1;
        for (int j=1; j<=i; j++) {
            if (i == j) dp[i][j] = 1;
            else dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % 10007;
        }
    }
    cout << dp[N][K] << endl;
}
