#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cout << "Enter the length: " << endl;
    cin >> n;
    cout << "Enter the breadth: " << endl;
    cin >> m;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(i == 1 || i == n || j == 1 || j == m){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}
/*BEGIN
    // Declare variables for length and breadth
    DECLARE INTEGER length, breadth

    // Prompt user to enter the length of the rectangle
    PRINT "Enter the length:"
    INPUT length

    // Prompt user to enter the breadth of the rectangle
    PRINT "Enter the breadth:"
    INPUT breadth

    // Loop through each row from 1 to length
    FOR i FROM 1 TO length DO
        // Loop through each column from 1 to breadth
        FOR j FROM 1 TO breadth DO
            // Check if the current position is on the boundary
            IF i == 1 OR i == length OR j == 1 OR j == breadth THEN
                PRINT "*" WITH A SPACE AFTER IT
            ELSE
                PRINT " " WITH A SPACE AFTER IT
            END IF
        END FOR

        // Move to the next line after finishing a row
        PRINT NEWLINE
    END FOR
END
*/
