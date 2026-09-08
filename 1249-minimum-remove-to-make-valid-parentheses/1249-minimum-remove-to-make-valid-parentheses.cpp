class Solution {
public:
    string minRemoveToMakeValid(string s) {
        
       vector<bool>visited(s.size(), true);
       stack<int>st;
       for(int i=0; i<s.size(); i++){
           if(s[i] == '(') st.push(i);
           else if(s[i] == ')'){
                  if(!st.empty()) st.pop(); 
                  else visited[i] = false;
            }
        }

        while(!st.empty()){
           visited[st.top()] = false;
           st.pop();
        }
        string ans = "";
        for(int i=0; i<visited.size(); i++) if(visited[i]) ans += s[i];

        return ans;
    }
};