#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    double prev=0, res=1, k=0,pk=0;
    while (res <= n) {
        k++;
        res += k;
        if (res >= n)break;
        prev = res;
        pk = k;
    }
    cout << pk << " " << prev;
}
