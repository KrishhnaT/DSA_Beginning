#include <iostream>
#include <vector>

using namespace std;

void printAllSubarrays(const vector<int>& arr) {
    int n = arr.size();
    int count = 0;

    // Outer loop: chooses the starting point
    for (int start = 0; start < n; start++) {
        // Inner loop: chooses the ending point
        for (int end = start; end < n; end++) {
            cout << "Subarray " << ++count << ": [";

            // Print elements in the subarray
            for (int i = start; i <= end; i++) {
                cout << arr[i];
                if (i < end) cout << ", ";
            }
            cout << "]\n";
        }
    }

    cout << "\nTotal number of subarrays: " << count << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4};

    cout << "Original array: [";
    for (size_t i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if (i < arr.size() - 1) cout << ", ";
    }
    cout << "]\n\n";

    // Call function to print all subarrays
    printAllSubarrays(arr);

    return 0;
}
