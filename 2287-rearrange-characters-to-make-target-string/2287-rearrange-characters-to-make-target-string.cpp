class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        

        int freqS[26] = {0}; 
        int freqTarget[26] = {0}; 
        for(int i=0; i<s.size(); i++)freqS[s[i]-'a']++;
        for(int i=0; i<target.size(); i++) freqTarget[target[i]-'a']++;

        int ans = INT_MAX;
        for(int i=0; i<26; i++){
            if(freqTarget[i] > 0){
                ans = min(ans , freqS[i]/freqTarget[i]);
            }
        }
        return ans;
    }
};