class Solution {
public:
    int maxArea(vector<int>& nums) {
        
        int ans = INT_MIN; 
        int height = 0; 
        int distance = 0; 
        int tempArea = 0; 
        int left  = 0; 
        int right = nums.size()-1;

        while(left < right){

            height = min(nums[left], nums[right]); 
            distance = right - left;
            tempArea = height * distance; 
            ans = max(ans, tempArea); 

            if(nums[left] < nums[right]) left++;
            else right--;
        }

        return ans == INT_MIN ? -1 : ans;
    }
};