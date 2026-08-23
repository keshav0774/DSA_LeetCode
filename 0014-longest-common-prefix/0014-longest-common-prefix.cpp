class Solution {
public:
    string longestCommonPrefix(vector<string>& nums) {
        
        // sort(strs.begin(), strs.end()); 

        // string first = strs.front(); 
        // string last = strs.back(); 
        // int minLength = min(first.size() , last.size());
        // string ans = "";
        // for(int i=0; i<minLength; i++){
        //     if(first[i] != last[i]) break;
        //     else ans.push_back(first[i]);
        // }
        // return ans;
                int minLength = nums[0].size(); 
    for(int i=1; i<nums.size(); i++) minLength = min(minLength , (int)nums[i].size());
    
    string ans = "";
    for(int i=0; i<minLength; i++){
        
        char ch = nums[0][i]; 
        
        for(int j=1; j<nums.size(); j++){
            if(nums[j][i] != ch) return ans;
        }
        
        ans.push_back(ch);
    }
    return ans;
    }
};