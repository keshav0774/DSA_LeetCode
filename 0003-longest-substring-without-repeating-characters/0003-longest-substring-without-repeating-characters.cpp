class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         
         int start = 0;
        int end = 0;
        int length = 0;
        unordered_set<char>store;
        int n = s.size();
        while(end<n){


            if(store.find(s[end])!= store.end()){
                store.erase(s[start]);
                start++;
            }
            else{
                store.insert(s[end]);
                
                length = max(length, end-start+1);
                end++;
            }
        }
        return length;
    }
    
};