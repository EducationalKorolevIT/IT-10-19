#include <iostream>

using namespace std;

int main(){
    double a=0;
    int n=0;
    cin>>a>>n;
    double res=a;
    for(int i=0;i<n-1;i++){
        res=res*a;
    }
    cout<<res;
}
