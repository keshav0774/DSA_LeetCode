class Solution {
public:
int maxAmountRob(int n , vector<int>& temp , vector<int>& dp ){
    if(n < 0 ) return 0;
    if(n == 0) return temp[0];
    if (n == 1) return max(temp[0], temp[1]);
    if(dp[n] != -1) return dp[n];

    dp[n] = max(temp[n]+maxAmountRob(n-2, temp,dp), maxAmountRob(n-1,temp,dp));

    return dp[n];
}
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 0 ) return 0;
        if(n == 1) return nums[0];
        if( n == 2) return max(nums[0], nums[1]);
        

        vector<int> temp1(nums.begin() + 1, nums.end());
        vector<int> dp1(n, -1);
        int includingFirst = maxAmountRob(temp1.size()-1, temp1, dp1);

        vector<int> temp2(nums.begin(), nums.end() - 1);
        vector<int> dp2(n, -1);
        int includingLast = maxAmountRob(temp2.size()-1, temp2, dp2);

        return max(includingFirst , includingLast);
    }
};