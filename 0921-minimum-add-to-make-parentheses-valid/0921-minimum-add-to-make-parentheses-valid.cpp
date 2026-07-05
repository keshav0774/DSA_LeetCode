class Solution {
public:
    int minAddToMakeValid(string s) {
        
        int totalLength = s.size();
        stack<char>st;
        int ans = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '(') st.push(i);
            else{
                if(s[i] == ')' && st.empty()) continue;
                else {
                    st.pop();
                    ans +=2;
                }
            }
        }
        return totalLength - ans;
    }
};