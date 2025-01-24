// Selection Sort
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        // Assume the first element in the unsorted part is the smallest
        int smallestIdx = i;
        
        // Find the index of the minimum element in the unsorted part
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[smallestIdx]) {
                smallestIdx = j;
            }
        }
        
        // Swap the current element with the found minimum element
        int temp = arr[i];
        arr[i] = arr[smallestIdx];
        arr[smallestIdx] = temp;
    }
}

int main() {
    int n = 5;
    int arr[n] = {55, 34, 70, 42, 11};

    // Sort the array
    selectionSort(arr, n);

    // Print the sorted array
    printArray(arr, n);


}
