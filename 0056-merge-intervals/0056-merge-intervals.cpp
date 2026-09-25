class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>result;
        sort(intervals.begin(), intervals.end());
        result.push_back({intervals[0]});

        for(int i=1; i<intervals.size(); i++){
            int second = result[result.size()-1][1];
            if(second >= intervals[i][0]) 
            {
                second = max(second , intervals[i][1]);
                result[result.size()-1][1] = second;
            }
            else result.push_back({intervals[i]});
        }
        return result;
    }
};