class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int previous = nums[0];
        int maxLength = 0;
        int count = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] > previous){
                count++; 
                previous = nums[i];
                maxLength = max(maxLength, count);
            }
            else {
                maxLength = max(maxLength, count);
                previous = nums[i];
                count = 1;
            }
        }
        return maxLength == 0 ? count : maxLength;
    }

};