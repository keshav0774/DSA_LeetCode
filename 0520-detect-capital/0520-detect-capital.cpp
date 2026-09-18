class Solution {
public:
    bool detectCapitalUse(string word) {
        
       char ch = word[1];
       if(ch >= 'A' && ch <= 'Z'){
         for(int i=0; i<word.size(); i++){
            if(word[i] >= 'A' && word[i] <= 'Z') continue;
            else return false;
         }
       }
       if(ch >= 'a' && ch <= 'z'){
         for(int i=1; i<word.size(); i++){
            if(word[i] >= 'a' && word[i] <= 'z') continue;
            else return false;
         }
       }
       return true;
    }
};