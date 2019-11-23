#include <iostream>

using namespace std;

bool isHansu(int num) {
    int tmp, tnum = num;
    int x = tnum % 10;
    int y = (tnum % 100) / 10;
    int d = y - x;
    tnum /= 10;

    while (num >= 10) {
        x = num % 10;
        y = (num % 100) / 10;
        tmp = y - x;
        if (tmp == d) num /= 10;
        
        else return false;
    }
    
    return true;
}

int main() {
    int N, ans=0;
    cin >> N;
    
    if (N < 10) {
        cout << N << endl;
        return 0;
    }
    else {
        for (int i=1; i<=N; i++) {
            if (isHansu(i)) ans++;
        }
    }
    cout << ans << endl;
}
