class Solution {
public:
    string replaceDigits(string nums) {
        string ans = "";
        for(int i=0; i<nums.size(); i++){
            if(i%2 != 0){
                char ch = nums[i-1] + nums[i] - '0';
                ans += ch;

            }
            else ans += nums[i];
        }
        return ans;
    }
};