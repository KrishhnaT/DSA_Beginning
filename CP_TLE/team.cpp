#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;  // Read number of problems

    for (int i = 0; i < n; i++) {
        int p, v, t;
        cin >> p >> v >> t;  // Read confidence levels

        if (p + v + t >= 2) {
            count++;  // If at least two are sure, increase count
        }
    }

    cout << count << endl;  // Print the number of problems they will implement
    return 0;
}
