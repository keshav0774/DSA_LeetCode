class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        int prefixSum = 0;
       
        unordered_map<int,int>ma;
        ma[0] = -1;
        for(int i=0; i<nums.size(); i++){
            prefixSum += nums[i]; 
            int rem = prefixSum%k;
            if(ma.find(rem) != ma.end()){
                if(i -  ma[rem] >= 2) return true;
            }
             else ma[rem] = i;
        }
        return false;
    }
};