#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    queue<int> q;
    
    while (N--) {
        string inst;
        int num;
        cin >> inst;
        
        if (inst == "push") {
            cin >> num;
            q.push(num);
        }
        else if (inst == "pop") {
            if (q.empty()) {
                cout << -1 << endl;
            }
            else {
                cout << q.front() << endl;
                q.pop();
            }
        }
        else if (inst == "size") {
            cout << q.size() << endl;
        }
        else if (inst == "empty") {
            if (q.empty()) {
                cout << 1 << endl;
            }
            else {
                cout << 0 << endl;
            }
        }
        else if (inst == "front") {
            if (q.empty()) {
                cout << -1 << endl;
            }
            else {
                cout << q.front() << endl;
            }
        }
        else if (inst == "back") {
            if (q.empty()) {
                cout << -1 << endl;
            }
            else {
                cout << q.back() << endl;
            }
        }
    }
}
