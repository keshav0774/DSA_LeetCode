class Solution {
public:
    string calculateSubString(string s, int left , int right){
        while(left >= 0 && right < s.size() && s[left] == s[right]){
            left--;
            right++;
        }
        return s.substr(left+1 , right-left-1);
    }
    string longestPalindrome(string s) {
        int length = s.size();
        if(length == 1) return s; 
        string main = "";
        for(int i = 0; i<length ; i++){
            string odd = calculateSubString(s, i , i);
            string even = calculateSubString(s, i , i+1); 
            int length1 = odd.length(); 
            int length2  = main.length();
            int length3 = even.length(); 
            if(length1 > length2) main = odd;
            if(length3 > main.size()) main = even;
            
        }
        return main;
    }
};