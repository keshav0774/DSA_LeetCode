class Solution {
public:
int maxAmountRob(int n ,vector<int>& nums , vector<int>& dp){
    if(n==0) return nums[0];
    if(n==1) return max(nums[0], nums[1]);
    if(dp[n] != -1) return dp[n];
   return  dp[n] =  max(maxAmountRob(n-2,nums,dp)+nums[n], maxAmountRob(n-1, nums,dp));
}
 
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        if(n==0) return nums[0];
        vector<int>dp(n,-1);

        return maxAmountRob(n-1, nums,dp);
    }
};