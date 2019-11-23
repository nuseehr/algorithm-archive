#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int> >v;

void hanoi(int N, int from, int tmp, int to) {
    if (N == 1) {
        v.push_back(make_pair(from, to));
    }
    else {
        hanoi(N-1, from, to, tmp);
        v.push_back(make_pair(from, to));
        hanoi(N-1, tmp, from, to);
    }
}

int main() {
    int N;
    cin >> N;
    hanoi(N, 1, 2, 3);
    cout << v.size() << endl;
    
    for (int i=0; i<v.size(); i++) {
        cout << v[i].first << " " << v[i].second << endl;
    }
}
