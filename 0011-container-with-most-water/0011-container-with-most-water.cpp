class Solution {
public:
    int maxArea(vector<int>& nums) {
        int ans = INT_MIN;
        int left = 0;
        int right = nums.size()-1;
        int minLength = 0;
        int distance = 0;
        while(left < right){
            minLength = min(nums[left], nums[right]); 
            distance  = right - left;
            ans = max(ans, minLength*distance);
            if(nums[left]<nums[right]) left++;
            else right--;
        }
        return ans == INT_MIN? 0 : ans;
    }
};