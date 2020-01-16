#include <iostream>
#include<cmath>

using namespace std;

int main(){
        int a = 0, b = 0, c = 0;
        cin >> a >> b >> c ;
        int s1 = 0,  s2 = 0, s3 = 0, sum = 0;
        s1 = a + b;
        s2 = a + c;
        s3 = b + c;
        if (s1 > s2 ){
                if(s1 > s3)
            sum += s1;
        }
         if (s2 > s1 ){
                if(s2 > s3)
            sum += s2;
        }
         if (s3 > s1 ){
                if(s3 > s2)
            sum += s3;
        }
        cout << sum << endl;

    }
