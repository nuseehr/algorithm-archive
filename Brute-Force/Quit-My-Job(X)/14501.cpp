#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    vector<pair<int, int> > v;
     
    cin >> N;
    
    for (int i=0; i<N; i++) {
        int t, p;
        cin >> t >> p;
        
        v.push_back(make_pair(t, p));
    }
    
    for (int i=0; i<v.size(); i++) {
        cout << v[i].first << " " << v[i].second << endl;
    }
    
}
