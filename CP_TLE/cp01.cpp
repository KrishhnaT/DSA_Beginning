#include <bits/stdc++.h>
using namespace std;

void multiples(int a , int b ){
    if(a%b == 0 || b%a == 0){
        cout << "Multiples" <<endl;
    }
    else{
        cout << "No Multiples" <<endl;
    }
}

int main() {

    int a,b;
    cin >> a >> b;
    multiples(a,b);

    return 0;
}