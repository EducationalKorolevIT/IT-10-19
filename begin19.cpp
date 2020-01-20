#include <iostream>
#include <cmath>
using namespace std;
    int main(){
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int c1, c2, p, s;
    c1 = abs(x1 - x2);
    c2 = abs(y1 - y2);
    s = c1 * c2;
    p = 2*(c1 + c2);
    cout << s;
    cout << p;
    return 0;
    }
