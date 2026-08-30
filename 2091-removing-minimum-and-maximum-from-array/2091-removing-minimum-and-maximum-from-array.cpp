class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minIndex = 0, maxIndex = 0, ans = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[minIndex] > nums[i]) minIndex = i;
            if(nums[maxIndex] < nums[i]) maxIndex = i;
        }
        int size = nums.size();

        // both index remove from front 
        int case1 = max(minIndex, maxIndex)  + 1;
        int case2 = size - min(minIndex, maxIndex);
        int case3  = (minIndex+1) + (size - maxIndex);
        int case4 = (maxIndex+1) + (size - minIndex);
        

        return min({case1, case2, case3, case4});
    }
};