class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        
        int size = intervals.size(); 
        vector<int>ans(size , -1);
        map<int,int>check;
        for(int i=0; i<intervals.size(); i++){
            check[intervals[i][0]] = i;
        };
        
        for(int i=0; i<intervals.size(); i++){
            int element = intervals[i][1];

            auto it = check.lower_bound(element);

            if(it != check.end()) {
                // agr mil gya tho index add on karo
                ans[i] = it->second;
            }
        }
        return ans;
    }
};