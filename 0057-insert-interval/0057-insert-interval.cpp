class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        int i=0, n= intervals.size(); 
        int minRange = newInterval[0], maxRange = newInterval[1];
        while(i<n && intervals[i][1] < minRange){
            ans.push_back(intervals[i]);
            i++;
        }
        
        // make a valid inserting pair
        
        while(i<n && intervals[i][0] <= maxRange){
            minRange = min(intervals[i][0], minRange);
            maxRange = max(intervals[i][1],maxRange);
            i++;
        }
        ans.push_back({minRange, maxRange});
        while(i<n){
            ans.push_back(intervals[i]);
            i++;
        }
        return ans;
    }
};