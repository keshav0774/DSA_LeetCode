class Solution {
public:
int solve(vector<int>& nums, int k, unordered_map<int,int>& freq){
    
    int totalSubArray=0, left=0, count=0;
    for(int right=0; right<nums.size(); right++){
        freq[nums[right]]++;
        if(freq[nums[right]] == 1) count++;
        while(count == k){
            totalSubArray += nums.size() - right;
            freq[nums[left]]--;
            if(freq[nums[left]] == 0) count--;
            left++;
        }
    }
    return totalSubArray;
}
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        
        unordered_map<int,int>first;
        unordered_map<int,int>second; 
        int atLeastK = solve(nums, k, first); 
        int atLeastPlusOne = solve(nums , k+1, second);
        return atLeastK - atLeastPlusOne;
    }
};