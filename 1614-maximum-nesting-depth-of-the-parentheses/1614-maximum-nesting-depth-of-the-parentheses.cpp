class Solution {
public:
    int maxDepth(string s) {
        
        stack<char>st;
        int maxSize = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                st.push(s[i]);
                maxSize = max(maxSize,(int)st.size());
            }
            if(s[i] == ')'){
                st.pop();
            }
        }
        return maxSize;
    }
};