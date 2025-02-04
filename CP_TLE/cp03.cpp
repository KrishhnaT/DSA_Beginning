#include <bits/stdc++.h>
using namespace std;
 long long lastdigit(long long a , long long b){
     int x,y,z;

     x = a%10;
     y = b%10;

     z = x+y;
     return z ;
 }

int main() {
     long long a =13;
     long long b = 12;
    cout << lastdigit(a,b) << endl;

    return 0;
}