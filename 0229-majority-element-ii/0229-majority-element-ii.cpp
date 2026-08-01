class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int candidate1=0, candidate2=0;
        int vote1 = 0, vote2 = 0;

        for(int i=0; i<nums.size(); i++){
            
            if(candidate1 == nums[i]) vote1++;
            else if(candidate2 == nums[i]) vote2++;
            else if(vote1 == 0){
                candidate1 = nums[i];
                vote1++;
            }
            else if(vote2 == 0){
                candidate2 = nums[i];
                vote2++;
            }
            else {
                vote1--;
                vote2--;
            }
        }
        int n = nums.size()/3;
        vote1 = vote2 = 0;
        for(int i=0;i<nums.size(); i++){
            if(nums[i] == candidate1) vote1++;
          else  if(nums[i] == candidate2) vote2++;
        }
        vector<int> ans;

    if(vote1 > n)
    ans.push_back(candidate1);

    if(vote2 > n)
    ans.push_back(candidate2);

     return ans;
    }
};