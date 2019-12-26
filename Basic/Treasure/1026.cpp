#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N, min=0;
    scanf("%d", &N);
    int* A = new int[N];
    int* B = new int[N];
    
    for (int i=0; i<N; i++) scanf("%d", &A[i]);
    for (int i=0; i<N; i++) scanf("%d", &B[i]);
    sort(A, A+N, greater<int>());
    sort(B, B+N);
    
    for (int i=0; i<N; i++) min += A[i]*B[i];
    printf("%d\n", min);
    delete[] A;
    delete[] B;
    return 0;
}
