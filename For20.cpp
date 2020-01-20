#include <iostream>

using namespace std;

double fact(int i);

int main() {
    int n;
    cin>>n;
    double res=0;
    for(int b=1;b<=n;b++){
        res+=fact(b);
    }
    cout<<res;
}

double fact(int i){
    double result=1;
    for(int b=1;b<=i;b++){
        result=result*b;
    }
    return result;
}
