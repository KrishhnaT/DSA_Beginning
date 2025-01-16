#include <bits/stdc++.h>
using namespace std;

// Function to swap two integers using pointers
void swapValues(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
    cout << "After swap inside function: " << *x << " " << *y << endl;
}

int main(){
    int x = 3;
    int y = 4;
    int* p = &x;
    int* q = &y;

    // Pass the pointers directly
    swapValues(p, q);

    cout << "After swap in main: " << x << " " << y << endl;
    return 0;
}
