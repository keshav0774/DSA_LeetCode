class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int digit = 0;
        for(int i=0; i<nums.size(); i++){
            int length = to_string(nums[i]).size();
            if(length%2 == 0) digit++;
        }
        return digit;
    }
};