class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        // int kSum = 0;
        // for(int i=0; i<k; i++) kSum += cardPoints[i];
        // if(k == cardPoints.size()) return kSum;

        // int left = k-1;
        // int right = cardPoints.size()-1;
        // int maxSum = kSum;
        // while(left>=0 && right>=0){
        //     kSum += cardPoints[right] - cardPoints[left]; 
        //     maxSum = max(maxSum,kSum);
        //     left--,right--;
        // }
        // return kSum;
        int kSum = 0; 
        for(int i=0; i<k; i++) kSum += cardPoints[i];
        if(k == cardPoints.size()) return kSum;
        
        int left = k-1;
        int n = cardPoints.size()-1;
        int maxSum = kSum;
        while(left>=0 && n>=0){
            kSum += cardPoints[n] - cardPoints[left]; 
            maxSum = max(maxSum , kSum);
            left--,n--;
        }
        return maxSum;
    }
};