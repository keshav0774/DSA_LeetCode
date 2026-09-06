class Solution {
public:
    string smallestSubsequence(string s) {
         vector<int>last(26,0);
        for(int i=0; i< s.size(); i++) last[s[i] - 'a'] = i;

        vector<bool>mark(26,false);
        string ans;
        for(int i=0; i<s.size(); i++){

            if(mark[s[i]-'a']) 
                continue; 

            while(!ans.empty() && ans.back() > s[i] && last[ans.back() -'a'] > i){
                mark[ans.back() - 'a'] = false;
                ans.pop_back();
            }
            ans.push_back(s[i]);
            mark[s[i] - 'a'] = true;
        }
        return ans;
    }
};