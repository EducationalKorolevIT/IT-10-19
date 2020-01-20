#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    double dist1 = abs(a - b);
    double dist2 = abs(a - c);

    if (dist1 < dist2) {
        cout << "B " << dist1;
    }
    else {
        cout << "A " << dist2;
    }
}
