#include <iostream>

using namespace std;

int dp[100];

int fact(int num) {
    if (num <= 1) return dp[num] = 1;
    else return dp[num] = num * fact(num - 1);
}

int main() {
    int N;
    cin >> N;
    cout << fact(N) << endl;
}
