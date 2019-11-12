#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    return a.second < b.second;
}

int main() {
    int N, cur, ans=1;
    cin >> N;
    vector<pair<int, int> > v;
    
    while (N--) {
        int s, t;
        cin >> s >> t;
        v.push_back(pair<int, int>(s, t));
    }
    
    sort(v.begin(), v.end(), cmp);
    cur = v[0].second;
    
    for (int i=1; i<v.size(); i++) {
        if (v[i].first >= cur) {
            cur = v[i].second;
            ans++;
        }
    }
    cout << ans << endl;
}

/*
 반례.
 
 <input>
 9
 8 8
 5 8
 3 4
 2 5
 2 7
 8 8
 1 10
 3 3
 10 10

 <answer>
 6

 <output>
 5
 */
