class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        
      long long ans = 0; 
      for(int i=1; i<= nums.size(); i++){
          int n = nums.size(); 
          if(n % i == 0){
            int square = std::pow(nums[i-1], 2);
             ans += square;
          }
      }
      return ans;
    }
};