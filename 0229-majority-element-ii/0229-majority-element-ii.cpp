class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
     int firstElement = 0, count = 0;
     int secondElement = 0, vote = 0;
     for(int i=0; i<nums.size(); i++){
        if(firstElement == nums[i]) count++;
        else if(secondElement == nums[i]) vote++;
        else if(count == 0){
            firstElement = nums[i];
            count++;
        }
        else if(vote == 0){
            secondElement = nums[i];
            vote++;
        }
        else {
            vote--;
            count--;
        }
    }
    vote = count = 0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i] == firstElement) count++;
        else if(nums[i] == secondElement) vote++;
    }   
    int n = nums.size()/3;
    vector<int>ans;
    if(count > n) ans.push_back(firstElement);
    if(vote > n) ans.push_back(secondElement);
    return ans;
    
    }
};