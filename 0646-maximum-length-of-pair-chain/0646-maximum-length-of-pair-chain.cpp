bool cmp(vector<int>& a, vector<int>& b) {
    return a[1] < b[1];
}
class Solution {
public:

    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(),cmp);

        int secondChain = INT_MIN;
        
        int totalPair = 0;
        for(int i=0; i<pairs.size(); i++){
            if(secondChain < pairs[i][0]){
                secondChain = pairs[i][1];
                totalPair++;
            }
        }
        return totalPair;
    }
};