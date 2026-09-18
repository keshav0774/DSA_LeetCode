class Solution {
public:
    int heightChecker(vector<int>& heights) {
       int count = 0, index = 0;
       vector<int>freq(101,0);
       for(int i=0; i<heights.size(); i++) freq[heights[i]]++;
       for(int i=1; i<=100; i++){

        while(freq[i]-- >0){
            if(heights[index] != i) count++;
            index++;
        }
       }
       return count;
    }
};