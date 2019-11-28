#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int N, cycle=0;
vector<int> e[1001];
bool visited[1001];

void dfs(int n) {
    
    cout << n << " ";
    
    visited[n] = true;
    
    for (int i=0; i<e[n].size(); i++) {
        int next = e[n][i];
        if (!visited[next]) dfs(next);
    }
}


int main() {
    
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        cin >> N;
        
        int a;
        for (int i=1; i<=N; i++) {
            scanf("%d", &a);
            cout << i << "->" << a << endl;
            e[i].push_back(a);
        }
        cout << e[1][0] << endl;
        for (int i=1; i<=N; i++) {
            cout << visited[i] << endl;
        }
        cout << "\n";
    }
}

