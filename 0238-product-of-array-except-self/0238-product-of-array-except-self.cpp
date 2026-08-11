class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int>ans(nums.size(),0);
        int product = 1;
        int zero = 0, index = -1;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0){
                index = i; 
                zero++;
            }
            else product *= nums[i];
        }

       if(zero == 0){
            for(int i=0; i<nums.size(); i++){
            
            int currProduct = product / nums[i];
            ans[i] = currProduct;
            }
       }
       else if(zero == 1){
          ans[index] = product;
       }
       return ans;
    }
};