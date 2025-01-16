#include <iostream>
using namespace std;

int main() {
    int n; // Number of rows in the triangle pattern
    
    // Prompt user for the number of rows in the triangle pattern
    cout << "Enter the number of rows for the triangle pattern: ";
    cin >> n;

    int a = 1; // First term of the AP
    int d = 2; // Common difference of the AP

    // Generate the triangle pattern
    for (int i = 1; i <= n; i++) {
        int current = a; // Start with the first term of the AP
        for (int j = 0; j < i; j++) {
            cout << current << " ";
            current += d; // Move to the next term in the AP
        }
        cout << endl;
    }

    return 0;
}
//Explained using chat gpt 