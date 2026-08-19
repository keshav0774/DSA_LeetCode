class Solution {
public:
    int findPermutationDifference(string s, string t) {

        int ans = 0;

        for(int i=0; i<s.size(); i++){

            int index = t.find(s[i]);

            ans += abs(i-index);
        }   
        return ans;
    }
};