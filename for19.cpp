#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float v = 0;
    int n, i;
    cin >> n >> v;
    for(i = 1; n > 0; n++){
        v = i * v;
    }
    cout << v;
}
