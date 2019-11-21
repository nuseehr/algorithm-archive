#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int N, M;
vector<int> A;
bool check(int mid) {
  int cnt = 1;
  int left = A.front();
  int right = A.front();
  for (int a : A) {
    left = min(a, left);
    right = max(a, right);
    if (right - left > mid) left = right = a, cnt++;
  }
  return cnt <= M;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N >> M;
  int left = 0, right = 0, mid = 0;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    A.push_back(a);
    right = max(a, right);
  }
  int ans = 0;
  while (left <= right) {
    // printf("%d, %d\n", left, right);
    mid = (left + right) / 2;
    if (check(mid))
      ans = mid, right = mid - 1;
    else
      left = mid + 1;
  }
  cout << ans << "\n";
}
