class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxElement = INT_MIN;
        for(int i=0; i<nums.size(); i++) maxElement = max(maxElement, nums[i]);
        int freq = 0, left = 0;
        long long totalSubArray = 0;
        for(int right=0; right<nums.size(); right++){
            if(nums[right] == maxElement) freq++;
            while(freq == k){
                totalSubArray += nums.size() - right;
                if(nums[left] == maxElement) freq--;
                left++;
            }
        }
        return totalSubArray;
    }
};