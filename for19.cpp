#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float v = 1;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        v = v*i;
    }
    cout << v;
}

