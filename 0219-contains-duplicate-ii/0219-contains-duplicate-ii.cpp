class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>ma;
        for(int i=0;i<nums.size();i++)
        {
            if(ma.count(nums[i]))
            {
                int value = abs(i- ma[nums[i]]);
                if(value <= k) return true;
            }
            ma[nums[i]] = i;
        }
        return false;
    }
};