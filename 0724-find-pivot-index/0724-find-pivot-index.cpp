class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int size = nums.size(); 
        vector<int>prefix(size,0);
        vector<int>suffix(size,0);

        int prefixSum = nums[0];
        int suffixSum = nums[size-1];

        prefix[0] = prefixSum;
        suffix[size-1] = suffixSum;

        for(int i=1; i<size; i++){
            prefixSum = prefix[i-1] + nums[i];
            prefix[i] = prefixSum;
        }

        for(int i=size-2; i>=0; i--){
            suffixSum = suffix[i+1] + nums[i];
            suffix[i] = suffixSum;
        }

        for(int i=0; i<size; i++){
            if(prefix[i] == suffix[i]) return i;
        }
        return -1;
    }
};