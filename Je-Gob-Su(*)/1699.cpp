#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    int dp[100001] = {0, };
    cin >> n;
    
    for(int i=1; i<=n ;i++){
        dp[i] = i;
        for(int j=1; j*j<=i; j++)
            dp[i] = min(dp[i], dp[i-j*j]+1);
    }
    
    for (int i=1; i<=n; i++) {
        cout <<  i << " : " << dp[i] << endl;
    }
}
