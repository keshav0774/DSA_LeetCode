class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>>ans;

        sort(nums.begin(), nums.end()); 

        for(int i=0; i<nums.size()-2; i++){

            if(i > 0 && nums[i] == nums[i-1]) continue; //skip the duplicate 

            int first = i+1;
            int end = nums.size()-1; 

            while(first < end){

                int sum = nums[i] + nums[first] + nums[end]; 

                if(sum == 0){
                    ans.push_back({nums[i], nums[first], nums[end]}); 

                    first++, end--;

                    while(first < end && nums[first] == nums[first-1]) first++;
                    while(first <end && nums[end] == nums[end+1]) end--;
                }
                else if (sum > 0) end--;
                else first++;
            }
        }
        return ans;
    }
};