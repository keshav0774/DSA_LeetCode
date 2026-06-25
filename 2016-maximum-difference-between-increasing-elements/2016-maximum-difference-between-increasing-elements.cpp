class Solution {
public:
    int maximumDifference(vector<int>& nums) {

       int maxDifference = -1;
       int minElement = nums[0]; 
       for(int i=1; i<nums.size(); i++){
          minElement = min(minElement , nums[i]);
           maxDifference = max(maxDifference , nums[i] - minElement);
       } 
       return maxDifference == 0 ? -1 : maxDifference;
    }
    
};