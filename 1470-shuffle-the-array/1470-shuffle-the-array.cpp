class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector<int>ans;
        int i = 0;
        int size = nums.size();
        while(i<n && n<size){
            ans.push_back(nums[i]);
            ans.push_back(nums[n]);
            i++,n++;
        }
        return ans;
    }
};