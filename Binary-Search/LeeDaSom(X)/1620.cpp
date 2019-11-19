#include <iostream>
#include <string>
#include <map>

using namespace std;

map<int, string> m;

int main() {
    int N, M;
    cin >> N >> M;
    
    for (int i=0; i<N; i++) {
        string in;
        cin >> in;
        m.insert(make_pair(i, in));
    }
    
  
    
}
