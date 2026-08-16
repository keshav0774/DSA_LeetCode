class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      unordered_set<int>st(nums.begin(), nums.end());
        int longest=0;
        int length=0;
        for(int num : st)
        {
            if(!st.count(num-1))
            {
                int current=num+1;;
                length=1;
                while(st.count(current))
                {
                    current++;
                    length++;
                }
                longest=max(longest,length);
            }
        }
        return longest;
    }
};