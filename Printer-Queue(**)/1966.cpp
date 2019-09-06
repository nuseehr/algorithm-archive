#include <iostream>
#include <queue>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        int in;
        int N, M;
        int answer = 0;
        cin >> N >> M;
        
        priority_queue<int> pq;
        queue<pair<int, int> >q;
        
        for (int i=0; i<N; i++) {
            cin >> in;
            pq.push(in);
            q.push(pair<int, int>(i, in));
        }
        
        while (!q.empty()) {
            int idx = q.front().first;
            int val = q.front().second;
            q.pop();
            
            if (pq.top() == val) {
                pq.pop();
                answer++;
                if (idx == M) {
                    cout << answer << endl;
                    break;
                }
            }
            else q.push(pair<int, int>(idx, val));
        }
    }
}
