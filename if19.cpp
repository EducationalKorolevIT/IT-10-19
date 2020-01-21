#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

   if(a == b && b == c)
        cout << "4";

   if(b == c && c == d)
        cout << "1";

   if(a == c && c == d)
    cout << "2";

    if(a == b && b == d)
    cout << "3";

}

