#include <iostream>

using namespace std;

int dp[301] = {0, };

int main() {
    int N;
    bool one = false;
    cin >> N;
    
    for (int i=1; i<=N; i++) cin >> dp[i];
    
    for (int i=2; i<=N; i++) {
        if (dp[i]+dp[i-1] < dp[i]+dp[i-2] || one) {
            dp[i] += dp[i-2];
            one = false;
        }
        else if (dp[i]+dp[i-1] > dp[i]+dp[i-2] && !one){
            dp[i] += dp[i-1];
            one = true;
        }
    }
    cout << dp[N] << endl;
}
