#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int dp[1000001] = {0, };

void makeOne(int i) {
    if (i%3 == 0) dp[i] = min(dp[i/3], dp[i-1]) + 1;
    else if (i%2 == 0) dp[i] = min(dp[i/2], dp[i-1]) + 1;
    else dp[i] = dp[i-1] + 1;
}

int main() {
    int N;
    int answer=0;
    cin >> N;
    
    for (int idx=2; idx<=N; idx++)
        makeOne(idx);
    
    cout << dp[N] << endl;
}
