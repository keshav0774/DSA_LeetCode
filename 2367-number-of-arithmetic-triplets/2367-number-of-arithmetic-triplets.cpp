class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count = 0;
        unordered_set<int>st(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(st.count(nums[i]+diff) && st.count(nums[i]+2*diff)) count++;
        }
        return count;
    }
};