class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        
        sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b)
        {
            return a[1] < b[1];
        });

        int totalArrow = 1;
        int currentEnd = points[0][1];
        for(int i=1; i<points.size(); i++){

            if(points[i][0] > currentEnd){
                // we need new arrow 
                totalArrow++;
                currentEnd = points[i][1];
            }
        }
        return totalArrow;
    }
};