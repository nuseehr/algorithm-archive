#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    char c;
    vector<int> e[10];
    int degree1[10] = {0, };
    int degree2[10] = {0, };
    int mx[10] = {0, };
    int mn[10] = {0, };

    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> c;

        if (c == '<') {
            e[i+1].push_back(i);
            degree1[i]++;
            degree2[i]++;
        }
        else {
            e[i].push_back(i+1);
            degree1[i+1]++;
            degree2[i+1]++;
        }
    }

    for (int i=0; i<=N; i++) {
        for (int j=0; j<=N; j++) {
            if (degree1[j] == 0) {
                mx[j] = 9-i;
                degree1[j] = -1;

                for (int k=0; k<e[j].size(); k++) {
                    int vertex = e[j][k];
                    degree1[vertex]--;
                }
                break;
            }
        }
        
        for (int j=N; j>=0; j--) {
            if (degree2[j] == 0) {
                mn[j] = N-i;
                degree2[j] = -1;

                for (int k=0; k<e[j].size(); k++) {
                    int vertex = e[j][k];
                    degree2[vertex]--;
                }
                break;
            }
        }
    }

    for (int i=0; i<=N; i++) cout << mx[i];
    cout << endl;
    for (int i=0; i<=N; i++) cout << mn[i];
    cout << endl;

}
