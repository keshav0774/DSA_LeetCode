class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& nums) {
        
        unordered_map<int,int>st;
        vector<int>ans;
        vector<int>temp;
        for(int i=0; i<arr1.size(); i++) st[arr1[i]]++;
        for(int i=0; i<nums.size(); i++){
            int freq = st[nums[i]];
            while(freq--){
                ans.push_back(nums[i]);
            }
            st.erase(nums[i]);
        }
        for(auto it = st.begin(); it != st.end(); ++it){
            int element = it->first;
            int freq = it->second;
            while(freq--) temp.push_back(element);
        }
        sort(temp.begin(),temp.end());
        for(int x : temp)
         ans.push_back(x);
        return ans;

    }
};