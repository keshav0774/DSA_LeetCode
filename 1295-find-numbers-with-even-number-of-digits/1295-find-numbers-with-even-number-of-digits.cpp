class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int digit = 0;
        for(int i=0; i<nums.size(); i++) if((to_string(nums[i]).size())%2 == 0) digit++;
        
        return digit;
    }
};