class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int>freq; 
        int maxDegree = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++; 
            if(maxDegree < freq[nums[i]]) maxDegree = freq[nums[i]];
        }
        freq.clear();
        int left = 0;
        int length = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++; 
            while(freq[nums[i]] == maxDegree){
                length = min(length , i-left+1); 
                freq[nums[left]]--;
                left++;
            }
        }
        return length;
    }
};