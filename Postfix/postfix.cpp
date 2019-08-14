#include <iostream>
#include <string>
#include <stack>

using namespace std;

int p(char c) {
    if(c == '(') return 0;
    else if(c == '+' || c =='-') return 1;
    else if(c == '*' || c == '/') return 2;
}

int main() {
    string str;
    stack<char> s;
    cin >> str;
    
    for (int i=0; i<str.length(); ++i) {
        char e = str.at(i);
        if (e >= 'A' && e <= 'Z') cout << e;
        else if (e == '(') s.push(e);
        else if (e == ')') {
            while (s.top() != '(') {
                cout << s.top();
                s.pop();
            }
            s.pop();
        }
        else {
            while (!s.empty() && p(s.top()) >= p(e)) {
                cout << s.top();
                s.pop();
            }
            s.push(e);
        }
    }
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
}
