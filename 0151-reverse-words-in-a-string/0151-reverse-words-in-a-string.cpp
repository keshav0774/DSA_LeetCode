class Solution {
public:
    string reverseWords(string s) {
        string temp = "";
        stack<string>st; 
        for(int i=0; i<s.size(); i++){
            if(s[i] != ' ') temp += s[i];
            else{
                if(temp != "") st.push(temp);

                temp = "";
            }
        }
        if(temp != "") st.push(temp);
        int size = st.size(); 
        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
            if(st.size() != 0) ans += ' ';
        }
        return ans;
    }
};