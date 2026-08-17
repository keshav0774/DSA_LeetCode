class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        if(n<2) return n; 

        int start = 2;
        for(int i=2; i<nums.size(); i++){
            if(nums[start-2] != nums[i])
            {
                nums[start] = nums[i];
                start++;
            }
        }
        return start;
        
    }
};