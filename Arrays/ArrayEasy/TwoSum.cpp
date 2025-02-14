#include <bits/stdc++.h>
using namespace std;
vector<int> twosum(vector<int>& nums, int target){
     vector<int> v(2);
     int n = nums.size();
     for(int i=0;i<n;i++){
          bool flag = true;
          for(int j=0;j<i+1;j++){
               if(nums[i]+nums[j]==target){
                    v[0]=i;
                    v[1]=j;
                    return v;
                 
               }
          }
      
          }
     
     }
   

int main(){

}