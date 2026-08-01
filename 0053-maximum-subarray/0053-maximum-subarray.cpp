class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxSum = INT_MIN;
        int prefixsum = 0;
        for(int i=0; i<nums.size(); i++){
            prefixsum += nums[i]; 
            maxSum = max(maxSum , prefixsum);
            if(prefixsum < 0) prefixsum = 0;
        }
        return maxSum;
    }
};