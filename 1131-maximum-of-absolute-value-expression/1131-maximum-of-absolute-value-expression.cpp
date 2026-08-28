class Solution {
public:
    int maxAbsValExpr(vector<int>& arr1, vector<int>& arr2) {
        vector<vector<int>> signs = {
            {1, 1, 1},
            {1, 1, -1},
            {1, -1, 1},
            {1, -1, -1},
            {-1, 1, 1},
            {-1, 1, -1},
            {-1, -1, 1},
            {-1, -1, -1}
        };
          int ans = 0;
        int n = arr1.size();
        for(auto& sign : signs) {
            int maxVal = INT_MIN;
            int minVal = INT_MAX;
            
            for(int i = 0; i < n; i++) {
                int val = sign[0] * arr1[i] + sign[1] * arr2[i] + sign[2] * i;
                maxVal = max(maxVal, val);
                minVal = min(minVal, val);
            }
            
            ans = max(ans, maxVal - minVal);
        }
        return ans;
        
    }
};