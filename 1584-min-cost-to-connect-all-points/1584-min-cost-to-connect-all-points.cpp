class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        
        int n = points.size(); 
        priority_queue<pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>>>pq;
        vector<bool>isMST(n,false);
        int cost = 0;

        pq.push({0, 0}); // {weight, node}

        while(!pq.empty()) {

            int weight = pq.top().first;
            int node = pq.top().second;

            pq.pop();

            if(isMST[node])
                continue;

            isMST[node] = true;
            cost += weight;

            // Current node ke saare unvisited points
            for(int j = 0; j < n; j++) {

                if(!isMST[j]) {

                    int wt = abs(points[node][0] - points[j][0])
                           + abs(points[node][1] - points[j][1]);

                    pq.push({wt, j});
                }
            }
        }

        return cost;
        
     
     
    }
};