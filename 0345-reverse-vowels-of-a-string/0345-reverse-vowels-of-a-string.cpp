class Solution {
public:
    string reverseVowels(string nums) {
        stack<char>st;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 'a' || nums[i] == 'e' || nums[i] == 'i' || nums[i] == 'o' || nums[i] == 'u') st.push(nums[i]);
            if(nums[i] == 'A' || nums[i] == 'E' || nums[i] == 'I' || nums[i] == 'O' || nums[i] == 'U') st.push(nums[i]);
        }
        int i=0, n = nums.size();
        while(!st.empty() && i<n){
            if(nums[i] == 'a' || nums[i] == 'e' || nums[i] == 'i' || nums[i] == 'o' || nums[i] == 'u')
            {
                nums[i] = st.top();
                st.pop(); 
            }
            else if(nums[i] == 'A' || nums[i] == 'E' || nums[i] == 'I' || nums[i] == 'O' || nums[i] == 'U'){
                nums[i] = st.top();
                st.pop();
            }
            i++;
        }
        return nums;
    }
};