class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
      int index = nums.size();
      int start =0;
      int mid= 0; 
      int end = nums.size()-1;
      while(start <= end){
         mid = start +(end-start)/2;
        if(nums[mid]-mid-1 >= k){
            index = mid;
            end = mid-1;
        }
        else start = mid+1;
    }   
      return index+k;
    }
};