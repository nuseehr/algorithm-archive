/* 1번 / / / / / / / / / / / / / / / / / / / / / */


#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    int arr[11], m[11];
    int a;
    int b;
    cin >> a >> b;
    for(int i=0; i<a; i++) cin >> arr[i];
    for(int i=0; i<b; i++) m[i] = arr[i];
    int* idx;
    
    for(int i=b; i<a; i++) {
        idx = min_element(m, m+b);
        *idx += arr[i];
    }
    
    cout << *max_element(m, m+b) << endl;
    
    return 0;
}


/* 2번 / / / / / / / / / / / / / / / / / / / / / */


#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

int main(void) {
    string arr[10001];
    int a, len=0;
    string s, line;
    getline(cin, line);
    stringstream ss;
    ss.str(line);
    
    while(ss.good()){
         ss >> arr[len];
         len++;
    }
    
    cin >> a;
    sort(arr, arr+len);
    
    while (a!=1) {
        next_permutation(arr, arr+len);
        a--;
    }
    
    for (int i=0; i<len; i++) s += arr[i];
    cout << s << "\n";
    return 0;
}


/* 3번 / / / / / / / / / / / / / / / / / / / / / */


#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main(void) {
    pair<int, int> t[2001];
    priority_queue<pair<int, int>> pq;
    int a;
    cin >> a;
    for(int i=0; i<a; i++) {
        cin >> t[i].first >> t[i].second;
    }
    
    sort(t, t+a);
    
    for(int i=0; i<a; i++) {
        int in = t[i].first;
        int out = t[i].second;
        if(!pq.empty() && -pq.top().first <= in) pq.pop();
        pq.push({-out, -in});
    }
    
    cout << pq.size() << "\n";
    return 0;
}


/* 4번 / / / / / / / / / / / / / / / / / / / / / */


#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(void) {
    int a, cnt=0, mx=0;
    string s, t;
    cin >> a;
    for(int i=0; i<a; i++) {
        cin >> t;
        s+=t;
    }
    
    for(auto e: s) {
        if(e == '0') cnt++;
        else if(e == '1') cnt = 0;
        if(mx < cnt) mx = cnt;
    }
    
    cout << (mx+2) / 2 << endl;

    return 0;
}


/* / / / / / / / / / / / / / / / / / / / / / */
