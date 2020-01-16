#include <iostream>

using namespace std;

int main(){
    int a=0,b=0,c=0;
    int sum;
    cin >> a >> b >> c;
    if(a>b){
        if(b>c)sum=a+b;
        else sum=a+c;
    }else{
        if(a>c)sum=b+c;
        else sum=b+c;
    }

    cout << sum;
}
