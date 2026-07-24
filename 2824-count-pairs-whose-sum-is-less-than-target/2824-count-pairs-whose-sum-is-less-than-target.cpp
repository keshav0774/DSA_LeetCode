class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
     int start = 0, count = 0;
     int end = nums.size()-1;
     sort(nums.begin(), nums.end());
     while(start <= end){
         if(nums[start]+nums[end] < target){
            count += (end - start);
            start++;
         }
         else end--;
     }
     return count;
    }
};