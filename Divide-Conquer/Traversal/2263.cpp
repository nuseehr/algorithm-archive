#include <iostream>

using namespace std;

int N;
int inOrder[100001];
int postOrder[100001];
int order[100001];

void preOrder(int is, int ie, int ps, int pe) {
    int root = postOrder[N];
    cout << root << endl;
}

int main() {
    cin >> N;
    
    for (int i=1; i<=N; i++) cin >> inOrder[i];
    for (int i=1; i<=N; i++) cin >> postOrder[i];
    for (int i=1; i<=N; i++) {
        order[inOrder[i]] = i;
        cout << inOrder[i] << " " << i << endl;
    }
    
    for (int i=1; i<=N; i++) cout << order[i] << " ";
    cout << endl;
    
    preOrder(1, N, 1, N);
}
