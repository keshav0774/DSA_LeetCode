class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        sort(strs.begin(), strs.end()); 

        string first = strs.front(); 
        string last = strs.back(); 
        int minLength = min(first.size() , last.size());
        string ans = "";
        for(int i=0; i<minLength; i++){
            if(first[i] != last[i]) break;
            else ans.push_back(first[i]);
        }
        return ans;
    }
};