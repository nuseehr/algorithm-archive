#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    queue<pair<int, int> > q;
    queue<int> a;
    
    for (int i=0; i<N; i++) {
        string s;
        cin >> s;
        q.push(pair<int, int>(i, s.length()));
        a.push(s.length());
    }
    
    
    while (!q.empty()) {
        int idx = q.front().first;
        int val = q.front().second;
        q.pop();
        
    }
}
