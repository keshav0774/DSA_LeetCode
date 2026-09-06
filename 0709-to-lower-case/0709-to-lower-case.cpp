class Solution {
public:

    string toLowerCase(string s) {
        
        string ans = "";
        for(int i=0; i<s.size(); i++){
            //if(s[i] >= 'a' && s[i] <= 'z') ans += s[i];
            if(s[i] >= 'A' && s[i] <= 'Z') ans += s[i] + 32;
            else ans += s[i];
        }
        return ans;
    }
};