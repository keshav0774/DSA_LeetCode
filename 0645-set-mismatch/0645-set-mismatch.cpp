class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int size = nums.size(); 
        vector<int>freq(size,0);
        for(int i=0; i<nums.size(); i++) {
            int index = nums[i];
            freq[index-1]++;
        }
        int duplicate = 0, missing = 0;
        for(int i=0; i<size; i++) {
            if(freq[i] == 2) duplicate =  i+1;
            if(freq[i] == 0) missing = i+1;
        }
        return {duplicate,missing};
    }
};