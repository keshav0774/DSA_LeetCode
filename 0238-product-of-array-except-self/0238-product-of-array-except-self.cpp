class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int>ans(nums.size(),0);
        int first = -1, zero = 0;
        int product = 1;

        for(int i=0;i<nums.size(); i++){
            if(nums[i] == 0){
                first = i;
                zero++;
            }
            else product *= nums[i];
        }

        if(zero == 0){
           for(int i=0;i<nums.size(); i++){
                ans[i] = product / nums[i];
            }
        }
        else if (zero == 1){
            ans[first] = product;
        }
        return ans;
        
    }
};