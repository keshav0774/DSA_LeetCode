class Solution {
public:
string removeHash(string s) {
       string ans = "";
       for(int i=0; i<s.size(); i++){
          if(s[i] == '#' ){
           if(!ans.empty())ans.pop_back();
          }
          else ans += s[i];
        }
        return ans;
    }
    bool backspaceCompare(string s, string t) {
        
        string first = removeHash(s);
        string second = removeHash(t);
        return first == second ? true : false;
    }
};