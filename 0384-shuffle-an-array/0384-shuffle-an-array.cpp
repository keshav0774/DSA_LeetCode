class Solution {
private:
  vector<int>temp;
  vector<int>original;
public:
    Solution(vector<int>& nums) {
        temp = nums;
        original = nums;
    }
    
    vector<int> reset() {
       temp = original;
       return temp;
    }
    
    vector<int> shuffle() {
        
        int size = temp.size();
        for(int i=0; i<size; i++){
            int index = i + rand()%(size-i);
            swap(temp[index], temp[i]);
        }
        return temp;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */