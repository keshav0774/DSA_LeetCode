class Solution {
public:
    char nextGreatestLetter(vector<char>& nums, char target) {
        
        if(target == 'z') return nums[0];

        string ans = "";
        for(int i=0; i<nums.size(); i++) ans += nums[i];

        for(int i=0; i<26; i++) {
            char ch = 'a' + i;
            if(ch > target && (ans.find(ch) != std::string::npos)) return ch;
        }
        return nums[0];
       
    }
};