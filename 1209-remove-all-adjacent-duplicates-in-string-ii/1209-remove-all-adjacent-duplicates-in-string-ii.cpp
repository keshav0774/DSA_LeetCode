class Solution {
public:
    string removeDuplicates(string s, int k) {
        string ans ="";
       vector<pair<char,int>>st;
        for(int i=0; i<s.size(); i++){
            if(st.empty()){
                st.push_back({s[i],1});
            }
            else{
                if(st.back().first == s[i]){
                    st.back().second++;
                    if(st.back().second == k) st.pop_back();
                }
                else st.push_back({s[i],1});
            }
        }
        for(auto &it : st){
            ans.append(it.second, it.first);
        }
        return ans;
    }
};