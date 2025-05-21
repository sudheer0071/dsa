#include <iostream>
#include <vector>
using namespace std;


// optimal Approach
    int longestOnes(vector<int>& nums, int k) {
        int l = 0, r = 0;
        int maxLen = 0;
        int zeroCount = 0;
        
        while(r<nums.size()){
          if(nums[r] == 0) zeroCount++;
          while(zeroCount > k ){
            if(nums[l]==0) zeroCount--;
            l++;
          }
          if(zeroCount<=k){
            maxLen = max(maxLen, r-l+1);
          }
          r++;
        }
return maxLen;
    }


    // more optimal Approach
     int longestOnes2(vector<int>& nums, int k) {
        int l = 0, r = 0;
        int maxLen = 0;
        int zeroCount = 0;
        
        while(r<nums.size()){
          if(nums[r] == 0) zeroCount++;
          if(zeroCount > k ){
            if(nums[l]==0) zeroCount--;
            l++;
          }
          if(zeroCount<=k){
            maxLen = max(maxLen, r-l+1);
          }
          r++;
        }
return maxLen;
    }

int main()
{
    vector<int> nums = {1,1,0,0,1,1,1,0,1}; 
    cout << longestOnes2(nums,2)<< endl;
  return 0;
}
