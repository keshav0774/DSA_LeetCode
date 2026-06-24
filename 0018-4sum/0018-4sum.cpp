class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),  nums.end());
        for(int i=0; i<n-3; i++){
              if (i > 0 && nums[i] == nums[i - 1]) continue;
        for(int first = i+1; first < n-2; first++){

            if( first > i+1 && nums[first] == nums[first-1]) continue; 

            int left = first + 1;
            int right = n-1;

            while( left < right){

                long long sum  = (long long)nums[i] + nums[first] + nums[left] + nums[right]; 

                if( sum == target){
                    ans.push_back({nums[i], nums[first], nums[left], nums[right]}); 
                    left++ , right--;
                    while( left < right && nums[left] == nums[left-1]) left++; 
                    while(left < right && nums[right] == nums[right+1]) right--;
                }
                else if( sum < target) left++;
                else right--;
            }
        }
    }
        return ans;
    }
};