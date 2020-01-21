#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n = 0, k = 0, i = 0, sum = 0;

    cin >> n;

    while(sum <= n){
        k++;
        sum += k;
        if(sum >= n){
            cout << k << " ";
            break;
        }
    }
    return 0;
}
