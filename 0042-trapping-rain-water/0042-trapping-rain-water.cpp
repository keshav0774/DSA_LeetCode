class Solution {
public:
    int trap(vector<int>& height) {
        int maxHeight = INT_MIN;
        int leftMax = 0;
        int rightMax = 0;
        int index = 0;
        int totalWater = 0;
        for(int i=0; i<height.size(); i++) 
        {
            if(maxHeight < height[i])
            {
                maxHeight = height[i];
                index = i;
            } 
        } 
        for(int i=0; i<index; i++){
             if(leftMax > height[i] ) totalWater  += leftMax - height[i];
            else  leftMax = height[i];
        }
        for(int i=height.size()-1; i>index; i--){
            if(rightMax > height[i] ) totalWater  += rightMax - height[i];
            else rightMax = height[i];
        }
        return totalWater;
    }
};