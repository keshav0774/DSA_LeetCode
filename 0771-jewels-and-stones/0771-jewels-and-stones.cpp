class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for(int i=0; i<jewels.size(); i++){
             int freq = std::count(stones.begin(), stones.end(), jewels[i]);
             count += freq;
        }
        return count;
    }
};