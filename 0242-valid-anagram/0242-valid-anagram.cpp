class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        vector<int>check(26,0);
        for(int i=0;i<s.size();i++) check[s[i]-'a']++;
        for(int i=0;i<t.size();i++) check[t[i]-'a']--;
        for(int i=0;i<check.size();i++) if(check[i] != 0) return false;
        return true;

    }
};