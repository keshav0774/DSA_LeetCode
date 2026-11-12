class Solution {
public:
    int lengthOfLastWord(string s) {
       int size = s.length()-1; 
       int i = size;
       int length = 0;
       while(i>=0 && s[i] == ' '){
               i--;
       }
       while(i>=0 && s[i] != ' ') {
        length++;
        i--;
       }
       return length;
    }
};