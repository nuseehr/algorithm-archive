#include <iostream>

using namespace std;

int main() {
    int E, S, M;
    int EC = 1, SC = 1, MC = 1;
    int year = 1;
    cin >> E >> S >> M;
    
    while (true) {
        if (E == EC && S == SC && M == MC) {
            cout << year << endl;
            break;
        }
        else {
            EC = (EC + 1) % 15;
            if (EC == 0) EC = 15;
            SC = (SC + 1) % 28;
            if (SC == 0) SC = 28;
            MC = (MC + 1) % 19;
            if (MC == 0) MC = 19;
            year++;
        }
    }
}
