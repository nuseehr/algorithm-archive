#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
    int inst;
    cin >> inst;
    deque<int> dq;
    
    while (inst--) {
        int n;
        string s;
        cin >> s;
        
        if (s == "push_back") {
            cin >> n;
            dq.push_back(n);
        }
        else if (s == "push_front") {
            cin >> n;
            dq.push_front(n);
        }
        else if (s == "pop_back") {
            if (dq.empty()) {
                cout << -1 << endl;
            }
            else {
                cout << dq.back() << endl;
                dq.pop_back();
            }
        }
        else if (s == "pop_front") {
            if (dq.empty()) {
                cout << -1 << endl;
            }
            else {
                cout << dq.front() << endl;
                dq.pop_front();
            }
        }
        else if (s == "size") {
            cout << dq.size() << endl;
        }
        else if (s == "empty") {
            cout << dq.empty() << endl;
        }
        else if (s == "back") {
            if (dq.empty()) {
                cout << -1 << endl;
            } else
            cout << dq.back() << endl;
        }
        else if (s == "front") {
            if (dq.empty()) {
                cout << -1 << endl;
            } else
            cout << dq.front() << endl;
        }
    }
}
