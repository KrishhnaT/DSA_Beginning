#include <bits/stdc++.h>
using namespace std;
 int singleNumber(vector<int>& nums) {
        int maxi = nums[0] ;
        int n = nums.size();
        for(int i =0 ; i<n;i++){
          maxi = max(maxi , nums[i]);
        }
        vector <int> hash(maxi + 1 ,0);
          for(int i = 0 ; i<n ;i++){
               hash[nums[i]]++ ;
          }

          for(int i =0 ; i < n ; i++){
               if(hash[nums[i]] == 1){
                    return nums[i];
               }
          }
          return -1;
        }
     
         

int main() {
      vector<int> arr = {4, 1, 2, 1, 2};
    int ans = singleNumber(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}