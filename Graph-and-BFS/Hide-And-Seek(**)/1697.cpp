// 움직일 수 있는 위치는 100,000 십만
// 수빈이가 0에 있고 동생이 100,000에 있는다면 그래도 1억은 안 넘음
#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;
#define MAX 100001

int N, K;
bool Visited[MAX];
int Second[MAX];

int main() {
    // (1) 수빈이와 동생의 위치를 받는다
  cin >> N >> K;
    // (2) 큐를 만들고 처음 수빈이 위치로 초기화 한다. 수빈이 위치는 방문표시한다.
  queue<int> q;
  q.push(N);
  Visited[N] = true;
  Second[N] = 0;
    // (3) 큐를 계속 돌려서 모든 위치를 방문한다.
  while (!q.empty()) {
        // (4) 현재 위치와 다음 시간을 구한다.
    int now = q.front();
    int nextSecond = Second[now] + 1;
      cout << now << " " << nextSecond << endl;
    q.pop();
        // (5) 수빈이가 방문할 있는 3가지 조건
        // now -1 || now + 1 || now * 2 를 모두 방문한다.
        // 다만, 범위안에 있거나 방문하지 않은 위치여야 한다.
    if (0 <= now - 1 && now - 1 < MAX && !Visited[now - 1]) {
        // if(0 <= now -1 && !Visted[now -1])
      Second[now - 1] = nextSecond;
        if (now - 1 == K) break;
        
      Visited[now - 1] = true;
      q.push(now - 1);
    }
    if (0 <= now + 1 && now + 1 < MAX && !Visited[now + 1]) {
        // if(now + 1 < MAX && !Visited[now + 1])
      Second[now + 1] = nextSecond;
        if (now + 1 == K) break;
      Visited[now + 1] = true;
      q.push(now + 1);
    }
    if (0 <= 2 * now && 2 * now < MAX && !Visited[now * 2]) {
        // if( now * 2 < MAX && !Visited[now * 2])
      Second[now * 2] = nextSecond;
        if (now * 2 == K) break;
      Visited[now * 2] = true;
      q.push(2 * now);
    }
  }
    // (6) 동생의 위치를 출력한다.
  cout << Second[K] << "\n";
}
