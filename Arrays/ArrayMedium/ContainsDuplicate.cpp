#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool containsDuplicate(vector<int>& nums) {
    // Sorting the array
    sort(nums.begin(), nums.end());
    for (size_t i = 0; i < nums.size() - 1; ++i) {
        // Checking the adjacent element for equality
        if (nums[i] == nums[i + 1]) return true;
    }
    return false;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 2};
    if (containsDuplicate(nums)) {
        cout << "Duplicates found!" << endl;
    } else {
        cout << "No duplicates found!" << endl;
    }
    return 0;
}
