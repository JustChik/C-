#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double a, b, c, p, s;
    cin >> a >> b >> c;
    p = (a + c + b) / 2;
    s = sqrt(p*(p - a) * (p - b) * (p - c));
    cout << s;
    return 0;
}