class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& nums) {
        
        vector<int>temp = nums;

        sort(temp.begin(), temp.end());
        map<int,int>ma;
        int rank = 0;
        for(int i=0;i<temp.size();i++){

            if(ma.find(temp[i]) == ma.end()){
                ma[temp[i]] = ++rank;
            }
        }
        for(int i=0;i<nums.size();i++){
            nums[i] = ma[nums[i]];
        }
        return nums;
       
    }
};