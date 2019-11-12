#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int> > v;
    
    while (N--) {
        int s, t;
        cin >> s >> t;
        v.push_back(pair<int, int>(s, t));
        
        
        cout << s << " " << t << endl;
    }
}
