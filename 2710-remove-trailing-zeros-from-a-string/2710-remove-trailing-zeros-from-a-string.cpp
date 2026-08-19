class Solution {
public:
    string removeTrailingZeros(string nums) {
        
        while(nums.back() == '0'){
            nums.pop_back();
        }
        return nums;
    }
};