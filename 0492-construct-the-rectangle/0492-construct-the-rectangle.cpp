class Solution {
public:
    vector<int> constructRectangle(int area) {
        
        int length = 0 , width = 0;
        int minDifference = INT_MAX;  
        for(int i=1; i*i <= area; i++){
            int value = area / i;
            if(value*i == area){
                int diff = value - i; 
                if(diff < minDifference){
                    minDifference = diff; 
                    length = value; 
                    width = i;
                }
            }
        }
        return {length , width};
    }
};