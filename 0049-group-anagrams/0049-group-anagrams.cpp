class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& nums) {
        
                vector<vector<string>>ans;
        unordered_map<string, vector<string>>ma;
        for(int a=0; a<nums.size(); a++){
            
            string s = nums[a];
            vector<int>freq(256,0);
         for(int i=0; i<s.size(); i++){
            freq[s[i]]++;
         }
        
        string temp = "";
        for(int i=0; i<256; i++){
            
            while(freq[i]--){
                temp += (char)i;
            }
        }
        
        ma[temp].push_back(nums[a]);
    }
        
        for(auto &it : ma) ans.push_back(it.second);
        
        return ans;
    }
    
};