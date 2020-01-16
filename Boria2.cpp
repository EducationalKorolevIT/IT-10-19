#include <iostream>

using namespace std;

int main(){
    long long a,b,c;
    cin >> a >> b >> c;
    if(a>b){
        long long aa=a,bb=b;
        a=bb;b=aa;
    }
    if(b>c){
        long long bb=b,cc=c;
        c=bb;b=cc;
    }if(a<c){
        long long aa=a,cc=c;
        c=aa;a=cc;
    }
    cout<<a+b;
}
