class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        
        int count = 0;
        unordered_map<string,int>st;
        for(int i=0; i<words1.size(); i++){
            st[words1[i]]++;
        }
        for(int i=0; i<words2.size(); i++){
            if( st[words2[i]] == 1){
                  count++;
                st[words2[i]] = -1;
            }
            else if(st[words2[i]] == -1){
                  count--;
                  st[words2[i]] = -2;
            }
        }
        return count;
    }
};