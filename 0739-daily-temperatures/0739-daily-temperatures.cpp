class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        
       
        int n = nums.size()-1;
        stack<int>st;
        vector<int>ans(n+1,0);
       
        for(int i=n; i>=0; i--){
            
            while(!st.empty() && nums[st.top()] <= nums[i]) {
                st.pop();
            }
           
            if(!st.empty() && nums[st.top()] > nums[i]){
                ans[i] = st.top() - i;
            }
            st.push(i);
        }
        return ans;
    }
};