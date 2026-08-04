class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int vote = 0;
        int candidate = 0;
        for(int i=0; i<nums.size(); i++){
           if(vote == 0){
             candidate = nums[i];
             vote++;
           } 
           else if( candidate == nums[i]) vote++;
           else vote--;
        }
        vote = 0;
        for(int i=0;i<nums.size(); i++) if(candidate == nums[i]) vote++;
        int n = nums.size();
        return vote > n/2 ? candidate : -1;
    }
};