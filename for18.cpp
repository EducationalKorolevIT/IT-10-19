#include<iostream>
#include<cmath>

using namespace std;

int main (){
float a=0;
int n=0;
int s=1;
cin >> a;
cin >> n;
for(int i=1; i<=n; i++){
    s+=pow(-1,i)*pow(a,i);
}
cout<< s;
}
