class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        int minElement = INT_MAX;
        int maxElement = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            minElement = min(minElement,nums[i]);
            maxElement = max(maxElement, nums[i]);
        }
        for(int i=minElement; i<maxElement; i++){
            if(find(nums.begin(), nums.end(),i) == nums.end()){
                  ans.push_back(i);
            }
        }
        return ans;
    }
};