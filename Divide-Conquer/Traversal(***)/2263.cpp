#include <iostream>

using namespace std;
 
int postOrder[100001];
int idx[100001];
 
void divide(int is, int ie, int ps, int pe) {
    
    if (is > ie || ps > pe) return;
 
    int root = postOrder[pe];
    int childLength = idx[root]-is;
    cout << root << ' ';
    
    // root 기준 왼쪽
    divide(is, idx[root]-1, ps, ps + childLength-1);
    
    // root 기준 오른쪽
    divide(idx[root]+1, ie, ps + childLength, pe-1);
}
 
int main() {
    int N;
    cin >> N;
 
    for (int i=1; i<=N; i++) {
        int inOrder;
        cin >> inOrder;
        idx[inOrder] = i;
    }
 
    for (int i=1; i<=N; i++) cin >> postOrder[i];

    divide(1, N, 1, N);
    cout << endl;
}
