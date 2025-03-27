#include <iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1.0;

        long long exp = n; // Convert to long long to handle INT_MIN case
        if (exp < 0) {
            x = 1 / x;
            exp = -exp;
        }

        double result = 1.0;
        while (exp > 0) {
            if (exp % 2 == 1) { // If exponent is odd
                result *= x;
            }
            x *= x;  // Square the base
            exp /= 2; // Reduce exponent by half
        }
        return result;
    }
};

int main() {
    Solution sol;
    cout << sol.myPow(2.0, 10) << endl;  // Output: 1024.0
    cout << sol.myPow(2.1, 3) << endl;   // Output: 9.261
    cout << sol.myPow(2.0, -2) << endl;  // Output: 0.25
    return 0;
}
