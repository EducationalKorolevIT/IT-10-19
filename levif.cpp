#include<cmath>
#include<iostream>

using namespace std;

main(){
int a=0, s=0,d=0, q=0;
cin>> a;
cin>> s;
cin>> d;
if (a>s){
    if(s>d){
       q=a+s;
    }
    else{
        q=a+d;
    }
}
else{
    if (a>d){
        q= s+d;
    }
    else{
        q= s+d;
    }
}
cout<<q;
}

