#include <iostream>
#include <algorithm>
#include <cmath>
#define EPSILON 0.000001

using namespace std;

int main() {
    double x, y, c, ans;
    cin >> x >> y >> c;
    
    double left = 0;
    double right = min(x, y);
    
    while (right - left >= EPSILON) {
        double mid = (left + right) / 2.0;
        double h1 = sqrt(x*x - mid*mid);
        double h2 = sqrt(y*y - mid*mid);
        double guess = (h1*h2) / (h1+h2);
        
        if (guess >= c) {
            ans = mid;
            left = mid;
        }
        else right = mid;
    }
    printf("%.3f\n", ans);
}
