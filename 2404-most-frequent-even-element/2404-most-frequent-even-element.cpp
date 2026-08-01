class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>st;
        for(int i=0; i<nums.size(); i++) st[nums[i]]++;
        int ans = -1;
        int freq = -1;
        for(auto it = st.begin(); it != st.end(); ++it){
            int element = it->first;
            int count = it->second;
            if(element%2 == 0){
                if(count > freq){
                    ans = element;
                    freq = count;
                }
                else if(count == freq && ans > element){
                    ans = element;
                    freq = count;
                }
            }
        }
        return ans;
    }
};