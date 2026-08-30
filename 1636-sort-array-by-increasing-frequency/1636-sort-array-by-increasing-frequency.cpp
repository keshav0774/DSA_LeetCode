class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        
        unordered_map<int,int>freq;
        for(int i=0; i<nums.size(); i++) freq[nums[i]]++;

        vector<pair<int,int>>temp (freq.begin(), freq.end());

        sort(temp.begin(), temp.end(), [](const auto& first, const auto& second){
            if(first.second != second.second) return first.second < second.second; 

            return first.first > second.first;
        });
        vector<int>ans;
        for(auto it: temp){
           int value  = it.first;
           int count = it.second; 
           while(count--){
              ans.push_back(value);
           }
           
        }
        return ans;

    }
};