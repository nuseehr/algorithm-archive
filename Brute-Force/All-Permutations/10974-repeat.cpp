#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    int num[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    
    do {
        for (int i=0; i<N; i++) {
            printf("%d ", num[i]);
        }
        printf("\n");
    } while (next_permutation(num, num+N));
}
