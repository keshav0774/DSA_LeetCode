class Solution {
public:
    int maxCapacity(vector<int>& costs, vector<int>& capacity, int budget) {
        
        int n = costs.size();

        if (n == 0) return 0;
        
        vector<pair<int,int>> temp;

        for (int i = 0; i < n; i++) {
            temp.push_back({costs[i], capacity[i]});
        }

        // sort according to cost
        sort(temp.begin(), temp.end());

        // prefix maximum capacity
        vector<int> prefixMax(n);
        prefixMax[0] = temp[0].second;

        for (int i = 1; i < n; i++) {
            prefixMax[i] = max(temp[i].second, prefixMax[i - 1]);
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {

            // Case 1: select only one machine
            if (temp[i].first < budget) {
                ans = max(ans, temp[i].second);
            }

            // Case 2: select two machines
            int start = 0;
            int end = i - 1;
            int j = -1;

            while (start <= end) {

                int mid = start + (end - start) / 2;

                if (temp[i].first + temp[mid].first < budget) {
                    j = mid;
                    start = mid + 1;
                }
                else {
                    end = mid - 1;
                }
            }

            if (j != -1) {
                int totalCapacity = temp[i].second + prefixMax[j];
                ans = max(ans, totalCapacity);
            }
        }

        return ans;
    }
};