#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter an odd number: ";
    cin >> n;

    // Ensure n is odd
    if (n % 2 == 0) {
        cout << "Please enter an odd number." << endl;
        return 0;
    }

    int mid = (n + 1) / 2;  // Calculate the middle row and column

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == mid || j == mid) {  // Check if it's the middle row or column
                cout << "* ";
            } else {
                cout << "  ";  // Print space for non-star positions
            }
        }
        cout << endl;
    }

    return 0;
}
/*Start
  Print "Enter an odd number:"
  Input n

  If n is even:
    Print "Please enter an odd number."
    Exit program
  End If

  Calculate mid = (n + 1) / 2  // Determine the middle row and column

  For i from 1 to n:           // Loop for rows
    For j from 1 to n:         // Loop for columns
      If i == mid OR j == mid: // Check if current position is in the middle row or column
        Print "*"
      Else:
        Print " "              // Print space for non-star positions
      End If
    End For
    Print a newline            // Move to the next row after finishing the current row
  End For

End
*/