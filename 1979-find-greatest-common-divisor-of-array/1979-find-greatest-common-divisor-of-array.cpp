class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxElement = INT_MIN, minElement = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            maxElement = max(maxElement, nums[i]);
            minElement = min(minElement, nums[i]);
        }
        int greatestNumber = 0;
        for(int i=1; i<=maxElement; i++){
            if(minElement%i == 0 && maxElement%i == 0){
                greatestNumber = max(i, greatestNumber);
            }
        }
        return greatestNumber;
    }
};